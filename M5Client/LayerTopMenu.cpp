#include "LayerTopMenu.h"
#include "ui_LayerTopMenu.h"

LayerTopMenu::LayerTopMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LayerTopMenu)
{
    ui->setupUi(this);
}

LayerTopMenu::~LayerTopMenu()
{
    delete ui;
}
