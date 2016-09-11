#ifndef CRABBITMQ_H
#define CRABBITMQ_H

#include <QObject>

#include "M5Library.h"

class CRabbitMq : public QObject
{
    Q_OBJECT
public:
    explicit CRabbitMq(QObject *parent = 0);
    int init(int argc, char *argv[]);
signals:

public slots:
};

#endif // CRABBITMQ_H
