#ifndef STAGECHART_H
#define STAGECHART_H

#include <QWidget>
#include "DataProvider.h"


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

private:
    Ui::StageChart *ui;
};

#endif // STAGECHART_H
