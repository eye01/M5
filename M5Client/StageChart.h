#ifndef STAGECHART_H
#define STAGECHART_H

#include <QWidget>
#include "DataProvider.h"
#include <QTimerEvent>
#include "ListenTick.h"
#include "TestTick.h"
#include "CKLineData.h"
#include <QProcess>
#include "M5Library.h"
namespace Ui {
class StageChart;
}

class StageChart : public QWidget
{
    Q_OBJECT

public:
    explicit StageChart(QWidget *parent = 0);
    ~StageChart();

    DataProvider m_data;

    CKLineData *m_kData;

#if TEST_TICK
    TestTick *m_listen;
#else
    ListenTick *m_listen;
    ListenTick *m_listen2;
    ListenTick *m_listen3;
#endif


    void startMq(MQ_TYPE type, QStringList, int);

    void startMq2(MQ_TYPE type, QStringList argv, int);

    void startMq3();

    void stopMq();



    MENU_SELECT m_cCtrl;

    int iTest;

private:
    Ui::StageChart *ui;
    void timerEvent(QTimerEvent *);
    int m_iMsec;
    QProcess *m_process;
    QProcess *m_process2;
    qint64 m_iPid;
public slots:
    void slotTopMenu(MENU_SELECT menu);
    void slotTick(QByteArray bTick);
    void slotTick(QString sTick);

    void slotTickStock(QString sTick);

    void slotTickFaitex(QString sTick);

};

#endif // STAGECHART_H
