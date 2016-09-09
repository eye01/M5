#include "DataProvider.h"

DataProvider::DataProvider(QObject *parent) : QObject(parent)
{





//    QVector<QVariant> list;
//    list.append(double(10));
//    list.append(double(14));
//    list.append(double(12));
//    list.append(double(11));

//    m_modelStock->appendData("AA",list);
    //QObject::startTimer(500);

    //m_listKtimer.append(1000);
}



//void DataProvider::timerEvent(QTimerEvent *)
//{


//    //ex
//    //m_cModel->loadFromCSV( ":/OHLC.csv" );
//    //    ,"Foobar Inc."
//    //    January, 20.3, 42.4, 10.3, 32.0
//    //    February, 32.0, 37.3, 20.0, 25.9
//    //    March, 25.9, 33.7, 20.3, 29.0
//    //    April, 29.9, 53.3, 28.1, 39.0
//    //    May, 39.0, 45.0, 36.4, 41.9
//    //    June, 41.9, 63.3, 41.0, 58.7
//    //    July, 58.7, 68.5, 50.7, 55.3
//    //   開盤、最高、最低、收盤



//}

void DataProvider::reflash(CKLineData *data)
{
    QString sHead=QTime::currentTime().toString("HH:mm:ss");
    m_modelStock->reflash(sHead,data->stockData());
    m_modelBarDiagram->reflash(QString(data->m_iNums),data->barData());
}

void DataProvider::toNext()
{

   // QString sHead=QTime::currentTime().toString("HH:mm:ss");
    m_modelStock->toNext();
    m_modelBarDiagram->toNext();
}



