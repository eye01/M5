#include "CLocalServer.h"


CLocalServer::CLocalServer(QObject *parent) :
    QThread(parent)
{
    m_iLink=0;

}

void CLocalServer::run()
{



}

void CLocalServer::startServer(QString sName)
{

    //m_clientConnection=NULL;

    m_server = new QLocalServer(this);

    if(!m_server->listen(sName))
    {
        if(m_server->serverError()== QAbstractSocket::AddressInUseError )
        {
            QLocalServer::removeServer(sName);
            if(!m_server->listen(sName))
            {
                qDebug()<<"start server agin is false";
            }
            else
            {
                qDebug()<<"start server agin is ok";
            }
        }
        else if(m_server->serverError() ==QFile::exists(sName))
        {
            QFile::remove(sName);
        }
    }
    else
    {
        qDebug()<<"start local server ok";
    }


    connect(m_server, SIGNAL(newConnection()), this, SLOT(slotAcceptConnection()));

    emit signalLog("TCP SERVER CREAT");

}

void CLocalServer::slotAcceptConnection()
{

    emit signalLog("get client link");

    //        if(m_clientConnection!=NULL)
    //        {
    //            m_clientConnection->abort();

    //            m_clientConnection->disconnect();
    //        }
    m_iLink++;
    m_clientConnection[m_iLink] = m_server->nextPendingConnection();
    QByteArray arrRead;
    while (true)
    {
        if(m_clientConnection[m_iLink]->waitForReadyRead(300) == false)
        {
            break;
        }

        arrRead.append(m_clientConnection[m_iLink]->readAll());

    }

    QString str =arrRead;

    emit signalLog("read client : "+str);

    emit signalReadAll(arrRead);

}



void CLocalServer::slotRetrun(QByteArray arrReturn)
{

    QLocalSocket *pSenderSocket = qobject_cast<QLocalSocket*>(sender());

    pSenderSocket->write(arrReturn);

    QString sReClient=arrReturn;

    emit signalLog("return client : "+sReClient);
}




