#ifndef LAYERTOPMENU_H
#define LAYERTOPMENU_H

#include <QWidget>
#include <QButtonGroup>

namespace Ui {
class LayerTopMenu;
}

class LayerTopMenu : public QWidget
{
    Q_OBJECT

public:
    explicit LayerTopMenu(QWidget *parent = 0);
    ~LayerTopMenu();

private:
    Ui::LayerTopMenu *ui;
};

#endif // LAYERTOPMENU_H
