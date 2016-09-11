#ifndef CTESTTICK_H
#define CTESTTICK_H

#include <QObject>
#include <QThread>
#include "M5Library.h"
class CTestTick : public QObject
{
    Q_OBJECT
public:
    explicit CTestTick(QObject *parent = 0);
    int init(int argc, char *argv[]);
signals:

public slots:
};

#endif // CTESTTICK_H
