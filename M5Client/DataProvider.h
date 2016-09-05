#ifndef DATAPROVIDER_H
#define DATAPROVIDER_H

#include <QObject>
#include <QDebug>
#include "ModelStock.h"
#include "ModelBarDiagram.h"
#include <QTimerEvent>

class DataProvider : public QObject
{
    Q_OBJECT
public:
    explicit DataProvider(QObject *parent = 0);

    ModelStock m_modelStock;

    ModelBarDiagram m_modelBarDiagram;











private:
    void timerEvent(QTimerEvent *);
signals:

public slots:
    void slotTick(QString sTick);
};

#endif // DATAPROVIDER_H
