#include "M5Library.h"




M5Library *M5Library::m_pInstance = 0;



M5Library::M5Library()
{

    m_network=new Network(this);

    m_network->connect(m_network,SIGNAL(signalLog(QString)),this,SIGNAL(signalLog(QString)));

    m_database=new DataBase(this);

    m_database->connect(m_database,SIGNAL(signalLog(QString)),this,SIGNAL(signalLog(QString)));

    m_ipc=new Ipc(this);

    m_ipc->connect(m_ipc,SIGNAL(signalLog(QString)),this,SIGNAL(signalLog(QString)));

}

QString M5Library::LibTest()
{
    return "M5Lib Test OK";
}

Network* M5Library::network()
{
      return m_network;
}

DataBase *M5Library::database()
{
    return m_database;
}

Ipc *M5Library::ipc()
{
    return m_ipc;
}
