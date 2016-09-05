#ifndef GLOBAL_H
#define GLOBAL_H

#include <QObject>
#include <QDebug>

#include "DataProvider.h"
#include "ListenTick.h"
#include "TestTick.h"

//外部要呼叫統一使用define的，design patten : singleton 
#define GLOBAL Global::Instance

#define Dataprovider Global::Instance().m_data

class Global : public QObject
{
    Q_OBJECT
public:

    static Global& Instance()
    {
        if(m_pInstance==0)
            m_pInstance=new Global();
        return *m_pInstance;
    }

    void startMq(MQ_TYPE type,QStringList argv,int iMsec=500);

    void stopMq();

    DataProvider m_data;

private:
    Global();
    static Global* m_pInstance;

    TestTick *m_listen;
signals:
    void signalTick(QString);
};

#endif // GLOBAL_H
