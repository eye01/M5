#ifndef MODELBARDIAGRAM_H
#define MODELBARDIAGRAM_H

#include <QObject>
#include "TableModel.h"
class ModelBarDiagram : public TableModel
{
    Q_OBJECT
public:
    explicit ModelBarDiagram(QObject *parent = 0);

    void appendData(QString sHeadName,QVector<QVariant> list);

signals:

public slots:
};

#endif // MODELBARDIAGRAM_H
