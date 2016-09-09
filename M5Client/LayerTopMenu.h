#ifndef LAYERTOPMENU_H
#define LAYERTOPMENU_H

#include <QWidget>
#include <QButtonGroup>
#include <QPropertyAnimation>
#include <QResizeEvent>
#include <QDebug>
#include <QLabel>
#include "CDefine.h"

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

    void on_txtId_textChanged(const QString &arg1);

    void on_cbTaifexType_activated(int index);
    void btnKClicked(bool bChicked);
private:
    Ui::LayerTopMenu *ui;
    QPropertyAnimation m_ani;
    QButtonGroup *m_group;
    void resizeEvent(QResizeEvent *);

    void layoutUI();

    void reKLineSelect();

    QRect rectStackType;

    QRect rectStackItem;

    void aniUiType();

    void aniUiItem();

    QLabel *m_lbId;



signals:
    void signalSelect(MENU_SELECT data);

};

#endif // LAYERTOPMENU_H
