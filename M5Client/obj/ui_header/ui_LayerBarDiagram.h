/********************************************************************************
** Form generated from reading UI file 'LayerBarDiagram.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERBARDIAGRAM_H
#define UI_LAYERBARDIAGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerBarDiagram
{
public:

    void setupUi(QWidget *LayerBarDiagram)
    {
        if (LayerBarDiagram->objectName().isEmpty())
            LayerBarDiagram->setObjectName(QStringLiteral("LayerBarDiagram"));
        LayerBarDiagram->resize(400, 300);

        retranslateUi(LayerBarDiagram);

        QMetaObject::connectSlotsByName(LayerBarDiagram);
    } // setupUi

    void retranslateUi(QWidget *LayerBarDiagram)
    {
        LayerBarDiagram->setWindowTitle(QApplication::translate("LayerBarDiagram", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class LayerBarDiagram: public Ui_LayerBarDiagram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERBARDIAGRAM_H
