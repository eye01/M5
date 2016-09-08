#include "StageChart.h"
#include "ui_StageChart.h"

StageChart::StageChart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StageChart)
{
    ui->setupUi(this);

    m_data.m_modelStock=&ui->layerStock->m_cModel;

    m_data.m_modelBarDiagram=&ui->layerBar->m_cModel;

//    m_data.startMq(_stock,QStringList()<<"tse.*"<<"otc.*"<<"emg.*");

    m_data.startMq(_stock,QStringList()<<"tse.1477",100);
}

StageChart::~StageChart()
{
    delete ui;
}
