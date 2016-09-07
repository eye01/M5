#include "TestTick.h"

TestTick::TestTick(QObject *parent) : ListenTick(parent)
{
    m_iLoopMSec=3000;
    QObject::startTimer(1000);
}

int TestTick::setBindingKey(MQ_TYPE type, QStringList argv, int iLoopMSec)
{
    loadFile("/home/roger/q_project/M5/rabbitMq/ActionStock");
    return 0;
}



void TestTick::loopListen()
{
        if(m_iIdx!=-1)
        {

            if(m_iIdx>=m_listData.length())
                m_iIdx=0;

            if(m_listData.length()>1)
            {
                qDebug()<<"test tick : "<<m_listData.at(m_iIdx);
                emit signalTick(m_listData.at(m_iIdx++));
            }
        }

}

void TestTick::loadFile(QString sFile)
{
    m_iIdx=-1;
    QFile file(sFile);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    m_listData.clear();
    QTextStream in(&file);

    int iLine=0;
    while (!in.atEnd() && iLine<100)
    {

        m_listData.append(in.readLine());
        iLine++;
    }

    m_iIdx=0;
}

void TestTick::run()
{
    while(1)
    {
        loopListen();

        msleep(1000);

    }
}

