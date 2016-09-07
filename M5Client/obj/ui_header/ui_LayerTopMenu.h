/********************************************************************************
** Form generated from reading UI file 'LayerTopMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERTOPMENU_H
#define UI_LAYERTOPMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerTopMenu
{
public:
    QGridLayout *gridLayout;
    QWidget *wBg;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *btnTick;
    QPushButton *btn1k;
    QPushButton *btn15k;
    QPushButton *btn3k;
    QPushButton *btn5k;
    QPushButton *btn10k;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *btn30k;

    void setupUi(QWidget *LayerTopMenu)
    {
        if (LayerTopMenu->objectName().isEmpty())
            LayerTopMenu->setObjectName(QStringLiteral("LayerTopMenu"));
        LayerTopMenu->resize(852, 115);
        gridLayout = new QGridLayout(LayerTopMenu);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(LayerTopMenu);
        wBg->setObjectName(QStringLiteral("wBg"));
        gridLayout_3 = new QGridLayout(wBg);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(wBg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btnTick = new QPushButton(groupBox);
        btnTick->setObjectName(QStringLiteral("btnTick"));
        btnTick->setMinimumSize(QSize(60, 0));
        btnTick->setCheckable(true);

        gridLayout_2->addWidget(btnTick, 0, 2, 1, 1);

        btn1k = new QPushButton(groupBox);
        btn1k->setObjectName(QStringLiteral("btn1k"));
        btn1k->setMinimumSize(QSize(60, 0));
        btn1k->setCheckable(true);

        gridLayout_2->addWidget(btn1k, 0, 3, 1, 1);

        btn15k = new QPushButton(groupBox);
        btn15k->setObjectName(QStringLiteral("btn15k"));
        btn15k->setMinimumSize(QSize(60, 0));
        btn15k->setCheckable(true);

        gridLayout_2->addWidget(btn15k, 0, 7, 1, 1);

        btn3k = new QPushButton(groupBox);
        btn3k->setObjectName(QStringLiteral("btn3k"));
        btn3k->setMinimumSize(QSize(60, 0));
        btn3k->setCheckable(true);

        gridLayout_2->addWidget(btn3k, 0, 4, 1, 1);

        btn5k = new QPushButton(groupBox);
        btn5k->setObjectName(QStringLiteral("btn5k"));
        btn5k->setMinimumSize(QSize(60, 0));
        btn5k->setCheckable(true);

        gridLayout_2->addWidget(btn5k, 0, 5, 1, 1);

        btn10k = new QPushButton(groupBox);
        btn10k->setObjectName(QStringLiteral("btn10k"));
        btn10k->setMinimumSize(QSize(60, 0));
        btn10k->setCheckable(true);

        gridLayout_2->addWidget(btn10k, 0, 6, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(100, 0));
        comboBox->setMaximumSize(QSize(300, 16777215));
        QFont font;
        font.setPointSize(14);
        comboBox->setFont(font);

        gridLayout_2->addWidget(comboBox, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(80, 0));
        lineEdit->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        btn30k = new QPushButton(groupBox);
        btn30k->setObjectName(QStringLiteral("btn30k"));
        btn30k->setMinimumSize(QSize(60, 0));
        btn30k->setCheckable(true);

        gridLayout_2->addWidget(btn30k, 0, 8, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 2, 1, 1);


        gridLayout->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(LayerTopMenu);

        QMetaObject::connectSlotsByName(LayerTopMenu);
    } // setupUi

    void retranslateUi(QWidget *LayerTopMenu)
    {
        LayerTopMenu->setWindowTitle(QApplication::translate("LayerTopMenu", "Form", 0));
        groupBox->setTitle(QString());
        btnTick->setText(QApplication::translate("LayerTopMenu", "BY TICK", 0));
        btn1k->setText(QApplication::translate("LayerTopMenu", "1\345\210\206k\347\267\232", 0));
        btn15k->setText(QApplication::translate("LayerTopMenu", "15\345\210\206k\347\267\232", 0));
        btn3k->setText(QApplication::translate("LayerTopMenu", "3\345\210\206k\347\267\232", 0));
        btn5k->setText(QApplication::translate("LayerTopMenu", "5\345\210\206k\347\267\232", 0));
        btn10k->setText(QApplication::translate("LayerTopMenu", "10\345\210\206k\347\267\232", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("LayerTopMenu", "\344\270\212\345\270\202\350\202\241\347\245\250", 0)
         << QApplication::translate("LayerTopMenu", "\344\270\212\346\253\203\350\202\241\347\245\250", 0)
         << QApplication::translate("LayerTopMenu", "\346\234\237\350\262\250", 0)
        );
        lineEdit->setPlaceholderText(QApplication::translate("LayerTopMenu", "\350\253\213\350\274\270\345\205\245\344\273\243\350\231\237", 0));
        btn30k->setText(QApplication::translate("LayerTopMenu", "30\345\210\206k\347\267\232", 0));
    } // retranslateUi

};

namespace Ui {
    class LayerTopMenu: public Ui_LayerTopMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERTOPMENU_H
