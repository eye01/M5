#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    GLOBAL();
    GLOBAL().startMq(_stock,QStringList()<<"");
    
}

Widget::~Widget()
{
    delete ui;
}
