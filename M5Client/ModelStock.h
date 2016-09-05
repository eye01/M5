#ifndef MODELSTOCK_H
#define MODELSTOCK_H

#include <QObject>
#include "TableModel.h"

class ModelStock : public TableModel
{
    Q_OBJECT
public:
    explicit ModelStock(QObject *parent = 0);

    void appendData(QString sHeadName, QVector<QVariant> list);

signals:

public slots:
};

#endif // MODELSTOCK_H
