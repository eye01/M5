#ifndef CKLINEDATA_H
#define CKLINEDATA_H

#include <QObject>

class CKLineData : public QObject
{
    Q_OBJECT
public:
    explicit CKLineData(QObject *parent = 0);

    void init();

    void appedn(QString sCost);

    float m_iMax;
    float m_iMin;
    float m_iOpen;
    float m_iClose;
signals:

public slots:
};

#endif // CKLINEDATA_H
