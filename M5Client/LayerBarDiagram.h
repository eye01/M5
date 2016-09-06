#ifndef LAYERBARDIAGRAM_H
#define LAYERBARDIAGRAM_H

#include <QWidget>
#include "ModelBarDiagram.h"
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
  void initUi();
    ModelBarDiagram m_cModel;
private:
    Ui::LayerBarDiagram *ui;
    BarDiagram* m_diagram;
    CartesianAxis* m_rightAxis;
    CartesianAxis* m_bottomAxis;



};

#endif // LAYERBARDIAGRAM_H
