#ifndef DATAPROVIDER_H
#define DATAPROVIDER_H

#include <QObject>
#include <QDebug>
#include "ModelStock.h"
#include "ModelBarDiagram.h"
#include "ListenTick.h"
#include "TestTick.h"
#include "CDefine.h"
#include "CKLineData.h"
#include <QTimerEvent>
#include <QTime>

class DataProvider : public QObject
{
    Q_OBJECT
public:
    explicit DataProvider(QObject *parent = 0);

    ModelStock *m_modelStock;

    ModelBarDiagram *m_modelBarDiagram;


private:
  //  void timerEvent(QTimerEvent *);
signals:
public:
    void reflash(CKLineData *data);
    void appendData(CKLineData *data);
public slots:


};

#endif // DATAPROVIDER_H
