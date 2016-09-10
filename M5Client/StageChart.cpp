#include "StageChart.h"
#include "ui_StageChart.h"

StageChart::StageChart(QWidget *parent) :
    QWidget(parent),m_listen(NULL),
    ui(new Ui::StageChart)
{
    ui->setupUi(this);

    iTest=-1;

    m_cCtrl.iKLine=-1;
    m_kData=new CKLineData(this);

    m_data.m_modelStock=&ui->layerStock->m_cModel;

    m_data.m_modelBarDiagram=&ui->layerBar->m_cModel;

    QObject::startTimer(1000);


    ui->wTopMenu->connect(ui->wTopMenu,SIGNAL(signalSelect(MENU_SELECT)),this,SLOT(slotTopMenu(MENU_SELECT)));
     //m_data.startMq(_stock,QStringList()<<"tse.*"<<"otc.*"<<"emg.*");

    //  startMq(_stock,QStringList()<<"tse.1477",100);
}

StageChart::~StageChart()
{
    stopMq();
    delete ui;
}

void StageChart::timerEvent(QTimerEvent *event)
{
    if(m_cCtrl.iKLine==-1)
        return;

    if(m_cCtrl.iKLine==1)
    {
        m_iMsec=0;
        return;
    }
    m_iMsec++;
    if(m_iMsec>=m_cCtrl.iKLine)
    {
        m_iMsec=0;
        m_data.appendData(m_kData->init());
        // m_kData->init();
    }
}

void StageChart::slotTopMenu(MENU_SELECT menu)
{
    qDebug()<<"top ";
//    if(m_cCtrl.sType==menu.sType)
//    {
//        m_cCtrl=menu;
//        return;
//    }

    m_cCtrl=menu;



    MQ_TYPE type;
    type=_taifex;

    if(menu.sKind=="stock")
        type=_stock;

    QString sArg="%1.%2";

    stopMq();
    startMq(type,QStringList()<<sArg.arg(menu.sType).arg(QString(menu.sId)),500);

}


void StageChart::startMq(MQ_TYPE type, QStringList argv, int iMsec)
{

    m_iMsec=0;

    QString sType="taifex";

    if(type==_stock)
        sType="stock";

    if(m_listen==NULL)
    {
#if TEST_TICK
        qDebug()<<"Test Tick";
        m_listen=new TestTick(this);
#else
        m_listen=new ListenTick(this);
#endif



        m_listen->connect(m_listen,SIGNAL(signalTick(QString)),this,SLOT(slotTick(QString)));

        m_listen->setBindingKey(sType,argv,iMsec);

        m_listen->start();
        iTest=0;


    }


}

void StageChart::stopMq()
{
    if(m_listen==NULL)
        return;

    m_listen->m_bIsRun=false;
    m_listen->close();
    m_listen->exit(0);
    while (m_listen->isFinished() == false);
    qDebug() << "delete thread";
    m_listen->deleteLater();
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
        m_kData->setTime(listTick.at(1));
        m_data.reflash(m_kData);

        ui->lbId->setText(listTick.at(0));
        ui->lbOpen->setText(QString::number(m_kData->m_iOpen));
        ui->lbMax->setText(QString::number(m_kData->m_iMax));
        ui->lbMin->setText(QString::number(m_kData->m_iMin));
        ui->lbClose->setText(QString::number(m_kData->m_iClose));

        if(m_cCtrl.iKLine==1)
        {
            m_data.appendData(m_kData->init());
        }
    }



}



