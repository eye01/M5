#include "StageChart.h"
#include "ui_StageChart.h"

StageChart::StageChart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageChart)
{
    ui->setupUi(this);
}

StageChart::~StageChart()
{
    delete ui;
}
