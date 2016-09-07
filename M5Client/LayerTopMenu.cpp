#include "LayerTopMenu.h"
#include "ui_LayerTopMenu.h"

LayerTopMenu::LayerTopMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerTopMenu)
{
    ui->setupUi(this);
    QButtonGroup *group=new QButtonGroup(this);
  group->setExclusive(true);
    group->addButton(ui->btnTick);
        group->addButton(ui->btn1k);
    group->addButton(ui->btn3k);
    group->addButton(ui->btn5k);
    group->addButton(ui->btn10k);
    group->addButton(ui->btn15k);
    group->addButton(ui->btn30k);




}

LayerTopMenu::~LayerTopMenu()
{
    delete ui;
}
