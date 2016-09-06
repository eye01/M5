#ifndef DATAPROVIDER_H
#define DATAPROVIDER_H

#include <QObject>
#include <QDebug>
#include "ModelStock.h"
#include "ModelBarDiagram.h"
#include "ListenTick.h"
#include "TestTick.h"
#include "CDefine.h"
#include <QTimerEvent>

class DataProvider : public QObject
{
    Q_OBJECT
public:
    explicit DataProvider(QObject *parent = 0);

    ModelStock *m_modelStock;

    ModelBarDiagram *m_modelBarDiagram;

    int iKtimer;


    void startMq(MQ_TYPE type,QStringList argv,int iMsec=1000);


    void stopMq();



#if TEST_TICK
    TestTick *m_listen;
#else
    ListenTick *m_listen;
#endif


private:
    void timerEvent(QTimerEvent *);
signals:

public slots:
    void slotTick(QString sTick);
};

#endif // DATAPROVIDER_H
