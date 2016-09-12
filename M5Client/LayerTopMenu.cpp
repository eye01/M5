#include "LayerTopMenu.h"
#include "ui_LayerTopMenu.h"

LayerTopMenu::LayerTopMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerTopMenu)
{
    ui->setupUi(this);

    ui->stackSelectType->hide();

    ui->stackSelectItem->hide();



    m_group=new QButtonGroup(this);
    //shit ....用btn group就是為了要可單選，但矛盾的是無法全部不選，只好手動做
    //    m_group->setExclusive(true);
    //    m_group->addButton(ui->btnTick);
    //    m_group->addButton(ui->btn1k);
    //    m_group->addButton(ui->btn3k);
    //    m_group->addButton(ui->btn5k);
    //    m_group->addButton(ui->btn10k);
    //    m_group->addButton(ui->btn15k);
    //    m_group->addButton(ui->btn30k);


    ui->btnTick->connect(ui->btnTick,SIGNAL(clicked(bool)),this,SLOT(btnKClicked(bool)));

    ui->btn1k->connect(ui->btn1k,SIGNAL(clicked(bool)),this,SLOT(btnKClicked(bool)));

    ui->btn3k->connect(ui->btn3k,SIGNAL(clicked(bool)),this,SLOT(btnKClicked(bool)));

    ui->btn5k->connect(ui->btn5k,SIGNAL(clicked(bool)),this,SLOT(btnKClicked(bool)));

    ui->btn10k->connect(ui->btn10k,SIGNAL(clicked(bool)),this,SLOT(btnKClicked(bool)));

    ui->btn15k->connect(ui->btn15k,SIGNAL(clicked(bool)),this,SLOT(btnKClicked(bool)));

    ui->btn30k->connect(ui->btn30k,SIGNAL(clicked(bool)),this,SLOT(btnKClicked(bool)));



    ui->txtId->setMaxLength(7);

    //QRegExp regx("[0-9]+$");  //only number
    //QValidator *validator=new QRegExpValidator(regx,ui->txtId);
    //ui->txtId->setValidator(validator);




    m_ani.setDuration(300);
    m_ani.setEasingCurve(QEasingCurve::OutQuad);
    m_ani.setPropertyName("pos");

    ui->stackSelectType->raise();

    ui->cbKind->raise();

}

LayerTopMenu::~LayerTopMenu()
{
    delete ui;
}

void LayerTopMenu::resizeEvent(QResizeEvent *)
{
    layoutUI();
}

//because use Qt layout  can't  to  move,so  layout by myself
void LayerTopMenu::layoutUI()
{
    int iDefineH=45;
    int iBorderRL=10;
    ui->cbKind->resize(QSize(75,iDefineH));
    ui->stackSelectType->resize(220,iDefineH);
    ui->stackSelectItem->resize(450,iDefineH);

    int iSpace=(width()-ui->cbKind->width()-ui->stackSelectType->width()-ui->stackSelectItem->width())/2-iBorderRL*2;

    if(iSpace<0)
        iSpace=0;

    ui->cbKind->move(iBorderRL,(height()-ui->cbKind->height())/2+10);

    // if(!ui->stackSelectType->isHidden())
    ui->stackSelectType->move(ui->cbKind->x()+ui->cbKind->width()+iSpace,(height()-ui->stackSelectType->height())/2+10);

    //  if(!ui->stackSelectItem->isHidden())
    ui->stackSelectItem->move(ui->stackSelectType->x()+ui->stackSelectType->width()+iSpace,(height()-ui->stackSelectItem->height())/2+10);

}

void LayerTopMenu::reKLineSelect()
{



    ui->btnTick->setChecked(false);

    ui->btn1k->setChecked(false);

    ui->btn3k->setChecked(false);

    ui->btn5k->setChecked(false);

    ui->btn10k->setChecked(false);

    ui->btn15k->setChecked(false);

    ui->btn30k->setChecked(false);


}

void LayerTopMenu::aniUiType()
{

    m_ani.setTargetObject(ui->stackSelectType);

    QPoint pEnd=ui->stackSelectType->pos();

    QPoint pStart=ui->cbKind->pos();

    m_ani.setStartValue(pStart);

    m_ani.setEndValue(pEnd);

    m_ani.start();


}

void LayerTopMenu::aniUiItem()
{
    m_ani.setTargetObject(ui->stackSelectItem);

    QPoint pEnd=ui->stackSelectItem->pos();

    QPoint pStart=ui->stackSelectType->pos();

    m_ani.setStartValue(pStart);

    m_ani.setEndValue(pEnd);

    m_ani.start();
}


void LayerTopMenu::on_cbKind_activated(int index)
{
    ui->txtId->clear();
    ui->stackSelectItem->hide();
    ui->stackSelectType->setCurrentIndex(index);
    ui->stackSelectType->setHidden(false);


    aniUiType();

    qDebug()<<"select Kind";

}

void LayerTopMenu::on_txtId_textChanged(const QString &)
{
    if(ui->stackSelectItem->isHidden())
    {
        reKLineSelect();
        ui->stackSelectItem->setHidden(false);
        aniUiItem();

    }

    qDebug()<<"id select ";
}



void LayerTopMenu::on_cbTaifexType_activated(int )
{
    reKLineSelect();
    ui->stackSelectItem->setHidden(false);


    qDebug()<<"taifex  type select";
}

void LayerTopMenu::btnKClicked(bool )
{
    MENU_SELECT menu;
    reKLineSelect();
    QPushButton *btn=dynamic_cast<QPushButton*>(sender());

    btn->setChecked(true);

    QString sKind="stock";

    if(ui->cbKind->currentIndex()!=0)
        sKind="taifex";

    QString sType="";

    QString sId="";

    if(ui->cbKind->currentIndex()==0)
    {

         if(ui->cbStockType->currentIndex()==1)
            sType="otc";
        else if(ui->cbStockType->currentIndex()==2)
            sType="emg";
        else if(ui->cbStockType->currentIndex()==3)
            sType="tsew";
        else if(ui->cbStockType->currentIndex()==4)
            sType="otcw";
        else //(ui->cbStockType->currentIndex()==0)
            sType="tse";

         sId=ui->txtId->text();

    }
    else
    {
        if(ui->cbTaifexType->currentIndex()==0)
        {
            sType="tfe";

            sId="TX";

            if(ui->cbTaifexId->currentIndex()==1)
                    sId="MX";

        }
        else if(ui->cbTaifexType->currentIndex()==1)
            sType="opt";




    }


    if(btn==ui->btnTick)
        menu.iKLine=1;
    if(btn==ui->btn1k)
        menu.iKLine=60;
    if(btn==ui->btn3k)
        menu.iKLine=180;
    if(btn==ui->btn5k)
        menu.iKLine=300;
    if(btn==ui->btn10k)
        menu.iKLine=600;
    if(btn==ui->btn15k)
        menu.iKLine=900;
    if(btn==ui->btn30k)
        menu.iKLine=1800;


    menu.sKind=sKind;

    menu.sType=sType;

    menu.sId=sId;

    emit signalSelect(menu);

}

void LayerTopMenu::on_cbTaifexId_activated(int index)
{

}
