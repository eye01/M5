#ifndef UTILITY_H
#define UTILITY_H

#include <QObject>
#include <QStringList>
struct CData
{
    QString sAction;
    QString sType;
    QStringList listData;
    QList<QStringList> dData;
};



class Utility :public QObject
{
    Q_OBJECT
public:
    Utility(QObject *parent = 0);
    ~Utility();

    QByteArray encode(CData data);

    CData decode(QByteArray arrData);


};

#endif // UTILITY_H
