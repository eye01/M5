#ifndef CKLINEDATA_H
#define CKLINEDATA_H

#include <QObject>
#include <QDebug>
#include <QVector>
#include <QValidator>
class CKLineData : public QObject
{
    Q_OBJECT
public:
    explicit CKLineData(QObject *parent = 0);
        //   開盤、最高、最低、收盤
    CKLineData *init();

    void setCost(QString sCost);

    void setNums(QString sNums);

    void setTime(QString sTime);
    QVector<QVariant> stockData()
    {
        QVector<QVariant> re;
        re.append(QVariant(m_iOpen));
        re.append(QVariant(m_iMax));
        re.append(QVariant(m_iMin));
        re.append(QVariant(m_iClose));
        return re;
    }
    QVector<QVariant> barData()
    {
        QVector<QVariant> re;
    re.append(double(0));
    re.append(double(0));
    re.append(m_iNums);
    re.append(double(0));
        return re;
    }


    float m_iMax;
    float m_iMin;
    float m_iOpen;
    float m_iClose;
    int m_iNums;
    QString m_sTime;
signals:

public slots:
};

#endif // CKLINEDATA_H
