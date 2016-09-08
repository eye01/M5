#include "LayerTopMenu.h"
#include "ui_LayerTopMenu.h"

LayerTopMenu::LayerTopMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerTopMenu)
{
    ui->setupUi(this);

    ui->stackSelectType->hide();

    ui->stackSelectItem->hide();


    QButtonGroup *group=new QButtonGroup(this);
    group->setExclusive(true);
    group->addButton(ui->btnTick);
    group->addButton(ui->btn1k);
    group->addButton(ui->btn3k);
    group->addButton(ui->btn5k);
    group->addButton(ui->btn10k);
    group->addButton(ui->btn15k);
    group->addButton(ui->btn30k);


    m_ani.setDuration(300);
    m_ani.setEasingCurve(QEasingCurve::OutQuad);
    m_ani.setPropertyName("pos");



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
    ui->stackSelectType->resize(190,iDefineH);
    ui->stackSelectItem->resize(480,iDefineH);

    int iSpace=(width()-ui->cbKind->width()-ui->stackSelectType->width()-ui->stackSelectItem->width())/2-iBorderRL*2;

    if(iSpace<0)
        iSpace=0;

    ui->cbKind->move(iBorderRL,(height()-ui->cbKind->height())/2+10);

   // if(!ui->stackSelectType->isHidden())
        ui->stackSelectType->move(ui->cbKind->x()+ui->cbKind->width()+iSpace,(height()-ui->stackSelectType->height())/2+10);

  //  if(!ui->stackSelectItem->isHidden())
        ui->stackSelectItem->move(ui->stackSelectType->x()+ui->stackSelectType->width()+iSpace,(height()-ui->stackSelectItem->height())/2+10);

}


void LayerTopMenu::on_cbKind_activated(int index)
{
    ui->stackSelectType->setCurrentIndex(index);
    ui->stackSelectType->setHidden(false);


}
