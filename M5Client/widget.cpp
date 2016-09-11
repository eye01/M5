#include "widget.h"
#include "ui_widget.h"
#include <QProcess>
#include "M5Library.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    GLOBAL();
   // GLOBAL().startMq(_stock,QStringList()<<"tse.*"<<"otc.*"<<"emg.*");
    






}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_clicked()
{
    StageChart* m=new StageChart();
    m->show();
}

void Widget::slotLog(QByteArray st)
{
    qDebug()<<"GET :: "<<st;
}
