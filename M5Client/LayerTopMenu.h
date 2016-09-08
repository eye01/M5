#ifndef LAYERTOPMENU_H
#define LAYERTOPMENU_H

#include <QWidget>
#include <QButtonGroup>
#include <QPropertyAnimation>
#include <QResizeEvent>
#include <QDebug>

namespace Ui {
class LayerTopMenu;
}

class LayerTopMenu : public QWidget
{
    Q_OBJECT

public:
    explicit LayerTopMenu(QWidget *parent = 0);

    ~LayerTopMenu();

private slots:

    void on_cbKind_activated(int index);

private:
    Ui::LayerTopMenu *ui;
    QPropertyAnimation m_ani;

    void resizeEvent(QResizeEvent *);

    void layoutUI();

    QRect rectStackType;

    QRect rectStackItem;

};

#endif // LAYERTOPMENU_H
