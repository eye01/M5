/********************************************************************************
** Form generated from reading UI file 'LayerStock.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERSTOCK_H
#define UI_LAYERSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerStock
{
public:

    void setupUi(QWidget *LayerStock)
    {
        if (LayerStock->objectName().isEmpty())
            LayerStock->setObjectName(QStringLiteral("LayerStock"));
        LayerStock->resize(400, 300);

        retranslateUi(LayerStock);

        QMetaObject::connectSlotsByName(LayerStock);
    } // setupUi

    void retranslateUi(QWidget *LayerStock)
    {
        LayerStock->setWindowTitle(QApplication::translate("LayerStock", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class LayerStock: public Ui_LayerStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERSTOCK_H
