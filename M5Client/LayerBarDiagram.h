#ifndef LAYERBARDIAGRAM_H
#define LAYERBARDIAGRAM_H

#include <QWidget>

#include "LayerChartBase.h"
#include <KDChartBarDiagram>
namespace Ui {
class LayerBarDiagram;
}

class LayerBarDiagram : public LayerChartBase
{
    Q_OBJECT

public:
    explicit LayerBarDiagram(QWidget *parent = 0);
    ~LayerBarDiagram();

    BarDiagram* m_diagram;
    CartesianAxis* m_rightAxis;
    CartesianAxis* m_bottomAxis;

    ModelBarDiagram *m_cModel;
private:
    Ui::LayerBarDiagram *ui;
    void initUi();
};

#endif // LAYERBARDIAGRAM_H
