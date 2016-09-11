#include "CTestTick.h"
#include <QFile>
#include <QDebug>

CTestTick::CTestTick(QObject *parent) : QObject(parent)
{

}

int CTestTick::init(int argc, char *argv[])
{
    if(argc<5)
        return -1;

    qDebug()<<argc;
    qDebug()<<argv[0]<<argv[1]<<argv[2]<<argv[3]<<argv[4];
    QString m_sNums;



    QStringList list=QString(argv[4]).split(".");
    m_sNums=list.at(1);



    QString sFile=QString("./../rabbitMq/data/%1_%2").arg(argv[3]).arg(list.at(0));
    qDebug()<<"test tick file : "<<sFile;

   int m_iIdx=0;
    QFile file(sFile);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return -1;

    QStringList m_listData;
    QTextStream in(&file);

    int iLine=0;
    while (!in.atEnd())
    {

        m_listData.append(in.readLine());
        iLine++;
    }


    QString sName;
    if(argc>5)
        sName=argv[5];

    qDebug()<<"sName : "<<sName;


    while(1)
    {
        QByteArray input;
        qDebug()<<m_listData.at(m_iIdx);
        input.append(m_listData.at(m_iIdx));
        QByteArray output;

        QStringList listData=QString(m_listData.at(m_iIdx)).split(" ");

        if((listData.length()>0 && listData.at(0) ==m_sNums)||m_sNums=="*")
        M5Lib().ipc()->connectHost(sName,input,output,50);


        m_iIdx++;
        if(m_iIdx>=m_listData.length())
        {
            m_iIdx=0;
        }
        QThread::msleep(50);
    }

}
