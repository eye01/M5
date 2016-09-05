#include "DataProvider.h"

DataProvider::DataProvider(QObject *parent) : QObject(parent)
{
    QVector<QVariant> list;
    list.append(double(10));
    list.append(double(14));
    list.append(double(12));
    list.append(double(11));

    m_modelStock.appendData("AA",list);
    //QObject::startTimer(1000);
}

void DataProvider::timerEvent(QTimerEvent *)
{


    //ex
    //m_cModel->loadFromCSV( ":/OHLC.csv" );
    //    ,"Foobar Inc."
    //    January, 20.3, 42.4, 10.3, 32.0
    //    February, 32.0, 37.3, 20.0, 25.9
    //    March, 25.9, 33.7, 20.3, 29.0
    //    April, 29.9, 53.3, 28.1, 39.0
    //    May, 39.0, 45.0, 36.4, 41.9
    //    June, 41.9, 63.3, 41.0, 58.7
    //    July, 58.7, 68.5, 50.7, 55.3
    //   開盤、最高、最低、收盤

    QVector<QVariant> list;
    list.append(double(10));
    list.append(double(14));
    list.append(double(12));
    list.append(double(11));

    m_modelStock.appendData("AA",list);


    QVector<QVariant> list2;
    list2.append(double(6));
    list2.append(double(0));
    list2.append(double(0));
    list2.append(double(0));
    m_modelBarDiagram.appendData("AA",list2);

}

void DataProvider::slotTick(QString sTick)
{

    QStringList listTick=sTick.split(" ");
    if(listTick.length()>=5 && listTick.at(2)!="0" &&listTick.at(3)!="0" &&listTick.at(4)!="0")
    {
        double iCost=QString(listTick.at(3)).toDouble();
        QString sNums=QString(listTick.at(4));

        qDebug()<<"cost : "<<iCost<<" nums : "<<sNums;
        QVector<QVariant> list;
        list.append(iCost);
        list.append(iCost);
        list.append(iCost);
        list.append(iCost);
        m_modelStock.appendData(QString(listTick.at(1)),list);
        QVector<QVariant> list2;
        list2.append(double(0));
           list2.append(double(0));
        list2.append(sNums.toDouble());
        list2.append(double(0));
        m_modelBarDiagram.appendData(sNums,list2);
    }
}

