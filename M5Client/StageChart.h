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
#endif


    void startMq(MQ_TYPE type, QStringList argv, int iMsec);

    void startMq2(MQ_TYPE type, QStringList argv, int iMsec);

    void stopMq();



    MENU_SELECT m_cCtrl;

    int iTest;

private:
    Ui::StageChart *ui;
    void timerEvent(QTimerEvent *);
    int m_iMsec;
    QProcess *m_process;
public slots:
    void slotTopMenu(MENU_SELECT menu);
    void slotTick(QByteArray bTick);
};

#endif // STAGECHART_H
