#ifndef NETWORK_H
#define NETWORK_H

#include <QObject>




struct CData
{
    QString sAction;
    QString sType;
    QStringList listData;
    QList<QStringList> dData;
};



class Network :public QObject
{
    Q_OBJECT
public:
    Network(QObject *parent = 0);

    ~Network();

    /** tcpip server
     * @brief startServer
     * @param sPort
     */
    void runTcpServer(QString sPort);

    void recallClient(QByteArray arrReturn);


    /** block tcpip client
     * @brief connectHost
     * @param sIp
     * @param sPort
     * @param arrInput
     * @param arrOutput
     * @param iWaitTimer
     * @return
     */
    int connectHost(QString sIp, QString sPort, QByteArray arrInput, QByteArray &arrOutput, int iWaitTimer=10000);


    QByteArray encode(CData data);

    CData decode(QByteArray arrData);




signals:
    void signalLog(QString st);

    /** tcpip server
     * @brief signalReadAll
     * @param arrRead
     */
    void signalReadAll(QByteArray arrRead);


};

#endif // NETWORK_H
