#ifndef MODELSTOCK_H
#define MODELSTOCK_H

#include <QObject>
#include "TableModel.h"


namespace VALUE_OBJ_STOCK
{
enum
{
    _open=0,
    _max=1,
    _min=2,
    _close=3
};
}


class ModelStock : public TableModel
{
    Q_OBJECT
public:
    explicit ModelStock(QObject *parent = 0);

    void appendData(QString sHeadName, QVector<QVariant> list);
    void toNext();
    void reflash(QString sHeadName, QVector<QVariant> list);
signals:

public slots:
};

#endif // MODELSTOCK_H
