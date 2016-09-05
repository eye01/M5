#ifndef STAGECHART_H
#define STAGECHART_H

#include <QWidget>

namespace Ui {
class StageChart;
}

class StageChart : public QWidget
{
    Q_OBJECT

public:
    explicit StageChart(QWidget *parent = 0);
    ~StageChart();

private:
    Ui::StageChart *ui;
};

#endif // STAGECHART_H
