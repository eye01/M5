#ifndef M5LIB_H
#define M5LIB_H
#include <QObject>
#include <QDebug>
#include <QSqlDatabase>
#include <QVariantList>
#include "Network.h"
#include "DataBase.h"
#include "Ipc.h"
#include "Utility.h"
#define M5Lib M5Library::Instance


using namespace _db;

class M5Library :public QObject
{
Q_OBJECT
public:
    M5Library();
    QString LibTest();

    Network *network();

    DataBase *database();

    Ipc *ipc();

    Utility utility;

    /**
     * @brief Instance singleton design pattern
     * @return
     */
    static M5Library& Instance()
    {
        if(m_pInstance==0)
            m_pInstance=new M5Library();
        return *m_pInstance;
    }



private:
    static M5Library* m_pInstance;

    Network *m_network;

    DataBase *m_database;

    Ipc *m_ipc;

signals:
    void signalLog(QString st);


   // void signalTcpServerReadAll(QByteArray arr);



};

#endif // M5LIB_H
