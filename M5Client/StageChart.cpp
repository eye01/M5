#include "StageChart.h"
#include "ui_StageChart.h"

StageChart::StageChart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageChart)
{
    ui->setupUi(this);
       m_listen=NULL;
        m_kData=new CKLineData(this);

    m_data.m_modelStock=&ui->layerStock->m_cModel;

    m_data.m_modelBarDiagram=&ui->layerBar->m_cModel;

    QObject::startTimer(1000);
    m_miSec=0;

    ui->wTopMenu->connect(ui->wTopMenu,SIGNAL(signalSelect(MENU_SELECT)),this,SLOT(slotTopMenu(MENU_SELECT)));
//    m_data.startMq(_stock,QStringList()<<"tse.*"<<"otc.*"<<"emg.*");

  //  startMq(_stock,QStringList()<<"tse.1477",100);
}

StageChart::~StageChart()
{
    delete ui;
}

void StageChart::timerEvent(QTimerEvent *event)
{
    m_miSec++;
    if(m_miSec>=m_cCtrl.iKLine)
    {
        m_miSec=0;
        m_data.toNext();
        qDebug()<<"next Kline";
    }
}

void StageChart::slotTopMenu(MENU_SELECT menu)
{
    m_cCtrl=menu;

    stopMq();

    MQ_TYPE type;
    type=_taifex;

    if(menu.sKind=="stock")
        type=_stock;

    QString sArg="%1.%2";

    startMq(type,QStringList()<<sArg.arg(menu.sType).arg(QString(menu.sId)),500);

}


void StageChart::startMq(MQ_TYPE type, QStringList argv, int iMsec)
{
    m_miSec=0;
    if(m_listen==NULL)
    {
#if TEST_TICK
        qDebug()<<"Test Tick";
        m_listen=new TestTick(this);
#else
        m_listen=new ListenTick(this);
#endif
        m_listen->connect(m_listen,SIGNAL(signalTick(QString)),this,SLOT(slotTick(QString)));

    }

    QString sType="taifex";

    if(type==_stock)
        sType="stock";
    m_listen->setBindingKey(sType,argv,iMsec);
    m_listen->start();
}

void StageChart::stopMq()
{
    if(m_listen==NULL)
        return;
//    m_listen->close();
//    m_listen->disconnect();
//    m_listen->quit();
//    m_listen->wait(5000);
//    m_listen->deleteLater();
    m_listen->close();
    m_listen->exit(0);
while (m_listen->isFinished() == false);
 qDebug() << "delete thread";
 delete m_listen;

    m_listen=NULL;

}

void StageChart::slotTick(QString sTick)
{

        QStringList listTick=sTick.split(" ");
    qDebug()<<sTick;
    if(listTick.length()<5 || listTick.at(4)=="0")
        return;

    if(m_cCtrl.sId=="*" || m_cCtrl.sId==listTick.at(0) )
    {
    m_kData->setCost(listTick.at(3));
    m_kData->setNums(listTick.at(4));
    m_data.reflash(m_kData);
    }


    ui->lbId->setText(listTick.at(0));
    ui->lbOpen->setText(QString::number(m_kData->m_iOpen));
     ui->lbMax->setText(QString::number(m_kData->m_iMax));
    ui->lbMin->setText(QString::number(m_kData->m_iMin));
    ui->lbClose->setText(QString::number(m_kData->m_iClose));
}



