#include "LayerBarDiagram.h"
#include "ui_LayerBarDiagram.h"

LayerBarDiagram::LayerBarDiagram(QWidget *parent) :
    LayerChartBase(parent),
    ui(new Ui::LayerBarDiagram)
{
    ui->setupUi(this);

    m_cModel=&Dataprovider.m_modelBarDiagram;
    initUi();
    m_diagram->setModel( m_cModel);
}

LayerBarDiagram::~LayerBarDiagram()
{
    delete ui;
}

void LayerBarDiagram::initUi()
{

    m_diagram = new BarDiagram;
    m_diagram->setType( BarDiagram::Normal );
  //  m_diagram->setType( BarDiagram::Stacked ); //設定類型 堆疊
        m_diagram->setBrush(0,Qt::red);
        m_diagram->setBrush(1,Qt::darkGreen);
        m_diagram->setBrush(2,Qt::white);
        m_diagram->setPen( 0,QColor(Qt::red) );
        m_diagram->setPen( 1,QColor(Qt::darkGreen) );
        m_diagram->setPen( 2,QColor(Qt::black) );


    m_rightAxis = new CartesianAxis( m_diagram );
    m_rightAxis->setPosition( CartesianAxis::Right );
        RulerAttributes ruler_R = m_rightAxis->rulerAttributes();
        ruler_R.setTickMarkPen( QColor(Qt::black) ); //設定刻度顏色 黑色
        ruler_R.setShowRulerLine(true);
        m_rightAxis->setRulerAttributes( ruler_R );
    m_diagram->addAxis( m_rightAxis );

    m_bottomAxis = new CartesianAxis( m_diagram );
    m_bottomAxis->setPosition( CartesianAxis::Bottom );
        RulerAttributes ruler_B = m_bottomAxis->rulerAttributes();
        ruler_B.setTickMarkPen( QColor(Qt::black) );
        ruler_B.setShowRulerLine(true);
        m_bottomAxis->setRulerAttributes( ruler_B );
    m_diagram->addAxis( m_bottomAxis );

    BarAttributes bar = m_diagram->barAttributes();
    bar.setGroupGapFactor(0.7);
    m_diagram->setBarAttributes(bar);

    this->coordinatePlane()->replaceDiagram( m_diagram );
    //this->setGlobalLeading( 20, 20, 20, 20 );

}
