#ifndef TESTTICK_H
#define TESTTICK_H

#include <QObject>
#include <QFile>

#include "ListenTick.h"
class TestTick : public ListenTick
{
    Q_OBJECT
public:
    explicit TestTick(QObject *parent = 0);
    int setBindingKey(QString sType, QStringList argv, int iLoopMSec =3000);
    void close(){}
private:


    int open(){m_bIsOpen=true; return 0;}

    void loopListen();

    int m_iIdx;
    QString m_sNums;

    QStringList m_listData;
    void loadFile(QString sFile);
    void run();
signals:

public slots:
};

#endif // TESTTICK_H
