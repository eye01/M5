#ifndef LISTENTICK_H
#define LISTENTICK_H

#include <QObject>
#include <QThread>
#include <QMutex>
#include <QDebug>
#include <QString>
#include <QStringList>

#include <string.h>

#include <stdint.h>
#include <amqp_tcp_socket.h>
#include <amqp.h>
#include <amqp_framing.h>

#include <assert.h>


#define STOCK "stock"

#define TAIFEX "taifex"

enum MQ_TYPE
{
    //股票
    _stock=0,
    //期貨
    _taifex=1
};




class ListenTick : public QThread
{
    Q_OBJECT
public:
    explicit ListenTick(QObject *parent = 0);

    ~ListenTick();


    /**
     * @brief setBindingKey
     * @param MQ_TYPE _stock  or  _taifex
     * @param argv      stock:  "tse.*" "otc.*" "emg.*"
     *                              taifex:  "tfe.*" "opt.*"                         * =all  , or keyin number
     * @param iLoopMSec loop delay millisecond
     * @return
     */



    /**
     * @brief startListen  保留原範例
     * @param exchange
     * @param argv
     * @return
     */
    int startListen(char const *exchange,QStringList argv);



    int setBindingKey(MQ_TYPE type, QStringList argv,int iLoopMSec=500);

    void close();
protected:

    bool m_bIsOpen;

    bool m_bIsRun;

    bool m_iLoopMSec;

    amqp_socket_t *m_socket;

    amqp_connection_state_t m_conn;

    amqp_bytes_t m_queuename;



    int open();

    void loopListen();

    void run();

signals:

    void signalTick(QString st);

public slots:
};

#endif // LISTENTICK_H
