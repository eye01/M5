#include "Global.h"

#define TEST_TICK 1

Global *Global::m_pInstance = 0;

void Global::startMq(MQ_TYPE type,QStringList argv,int iMsec)
{

    if(m_listen==NULL)
    {
#if TEST_TICK
            m_listen=new TestTick(this);
#else
            m_listen=new ListenTick(this);
#endif
        m_listen->connect(m_listen,SIGNAL(signalTick(QString)),this,SIGNAL(signalTick(QString)));
        m_listen->connect(m_listen,SIGNAL(signalTick(QString)),&m_data,SLOT(slotTick(QString)));
     }

    m_listen->setBindingKey(type,argv,iMsec);
    m_listen->start();
}

void Global::stopMq()
{
    if(m_listen==NULL)
        return;
   m_listen->close();
   m_listen->disconnect();
   m_listen->quit();
   m_listen->wait(1000);
   m_listen->deleteLater();
   m_listen=NULL;

}

Global::Global()
{
    qDebug()<<"global create";

    m_listen=NULL;

}

