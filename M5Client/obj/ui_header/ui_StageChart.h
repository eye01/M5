/********************************************************************************
** Form generated from reading UI file 'StageChart.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAGECHART_H
#define UI_STAGECHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "LayerBarDiagram.h"
#include "LayerStock.h"
#include "LayerTopMenu.h"

QT_BEGIN_NAMESPACE

class Ui_StageChart
{
public:
    QGridLayout *gridLayout;
    LayerTopMenu *wTopMenu;
    LayerBarDiagram *layerBar;
    LayerStock *layerStock;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *lbId;
    QLabel *label_2;
    QLabel *lbOpen;
    QLabel *label_4;
    QLabel *lbMin;
    QLabel *label_6;
    QLabel *lbMax;
    QLabel *label_9;
    QLabel *lbClose;

    void setupUi(QWidget *StageChart)
    {
        if (StageChart->objectName().isEmpty())
            StageChart->setObjectName(QStringLiteral("StageChart"));
        StageChart->resize(800, 600);
        StageChart->setMinimumSize(QSize(800, 600));
        gridLayout = new QGridLayout(StageChart);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        wTopMenu = new LayerTopMenu(StageChart);
        wTopMenu->setObjectName(QStringLiteral("wTopMenu"));
        wTopMenu->setMinimumSize(QSize(0, 80));
        wTopMenu->setMaximumSize(QSize(16777215, 120));

        gridLayout->addWidget(wTopMenu, 0, 0, 1, 1);

        layerBar = new LayerBarDiagram(StageChart);
        layerBar->setObjectName(QStringLiteral("layerBar"));

        gridLayout->addWidget(layerBar, 3, 0, 1, 1);

        layerStock = new LayerStock(StageChart);
        layerStock->setObjectName(QStringLiteral("layerStock"));

        gridLayout->addWidget(layerStock, 2, 0, 1, 1);

        widget_4 = new QWidget(StageChart);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QFont font;
        font.setPointSize(14);
        widget_4->setFont(font);
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget_4);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        lbId = new QLabel(widget_4);
        lbId->setObjectName(QStringLiteral("lbId"));

        horizontalLayout->addWidget(lbId);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        lbOpen = new QLabel(widget_4);
        lbOpen->setObjectName(QStringLiteral("lbOpen"));

        horizontalLayout->addWidget(lbOpen);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        lbMin = new QLabel(widget_4);
        lbMin->setObjectName(QStringLiteral("lbMin"));

        horizontalLayout->addWidget(lbMin);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_6);

        lbMax = new QLabel(widget_4);
        lbMax->setObjectName(QStringLiteral("lbMax"));

        horizontalLayout->addWidget(lbMax);

        label_9 = new QLabel(widget_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_9);

        lbClose = new QLabel(widget_4);
        lbClose->setObjectName(QStringLiteral("lbClose"));

        horizontalLayout->addWidget(lbClose);


        gridLayout->addWidget(widget_4, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 10);
        gridLayout->setRowStretch(3, 6);
        gridLayout->setRowMinimumHeight(0, 2);
        gridLayout->setRowMinimumHeight(1, 1);
        gridLayout->setRowMinimumHeight(2, 10);
        gridLayout->setRowMinimumHeight(3, 6);

        retranslateUi(StageChart);

        QMetaObject::connectSlotsByName(StageChart);
    } // setupUi

    void retranslateUi(QWidget *StageChart)
    {
        StageChart->setWindowTitle(QApplication::translate("StageChart", "Form", 0));
        label->setText(QApplication::translate("StageChart", "\344\273\243\350\231\237:", 0));
        lbId->setText(QApplication::translate("StageChart", "123", 0));
        label_2->setText(QApplication::translate("StageChart", "\351\226\213 :", 0));
        lbOpen->setText(QApplication::translate("StageChart", "5", 0));
        label_4->setText(QApplication::translate("StageChart", "\344\275\216 :", 0));
        lbMin->setText(QApplication::translate("StageChart", "8", 0));
        label_6->setText(QApplication::translate("StageChart", "\351\253\230 :", 0));
        lbMax->setText(QApplication::translate("StageChart", "12", 0));
        label_9->setText(QApplication::translate("StageChart", "\346\224\266 :", 0));
        lbClose->setText(QApplication::translate("StageChart", "10", 0));
    } // retranslateUi

};

namespace Ui {
    class StageChart: public Ui_StageChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAGECHART_H
