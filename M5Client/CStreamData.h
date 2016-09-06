#ifndef CSTREAMDATA_H
#define CSTREAMDATA_H

#include <QObject>

class CStreamData : public QObject
{
    Q_OBJECT
public:
    explicit CStreamData(QObject *parent = 0);

signals:

public slots:
    void slotTick(QString sTick);
};

#endif // CSTREAMDATA_H
