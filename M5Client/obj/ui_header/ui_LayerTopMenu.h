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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LayerTopMenu
{
public:
    QGridLayout *gridLayout_4;
    QWidget *wBg;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QComboBox *cbKind;
    QStackedWidget *stackSelectType;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbStockType;
    QLineEdit *txtId;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QComboBox *cbTaifexType;
    QComboBox *cbTaifexId;
    QStackedWidget *stackSelectItem;
    QWidget *page_3;
    QGridLayout *gridLayout;
    QPushButton *btnTick;
    QPushButton *btn1k;
    QPushButton *btn3k;
    QPushButton *btn5k;
    QPushButton *btn10k;
    QPushButton *btn15k;
    QPushButton *btn30k;
    QWidget *page_4;

    void setupUi(QWidget *LayerTopMenu)
    {
        if (LayerTopMenu->objectName().isEmpty())
            LayerTopMenu->setObjectName(QStringLiteral("LayerTopMenu"));
        LayerTopMenu->resize(1006, 129);
        gridLayout_4 = new QGridLayout(LayerTopMenu);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        wBg = new QWidget(LayerTopMenu);
        wBg->setObjectName(QStringLiteral("wBg"));
        gridLayout_3 = new QGridLayout(wBg);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(wBg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        cbKind = new QComboBox(groupBox);
        cbKind->setObjectName(QStringLiteral("cbKind"));
        cbKind->setGeometry(QRect(3, 57, 75, 34));
        cbKind->setMinimumSize(QSize(75, 0));
        cbKind->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        cbKind->setFont(font);
        stackSelectType = new QStackedWidget(groupBox);
        stackSelectType->setObjectName(QStringLiteral("stackSelectType"));
        stackSelectType->setGeometry(QRect(120, 50, 220, 43));
        stackSelectType->setMinimumSize(QSize(220, 0));
        stackSelectType->setMaximumSize(QSize(220, 16777215));
        QFont font1;
        font1.setPointSize(14);
        stackSelectType->setFont(font1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        cbStockType = new QComboBox(page);
        cbStockType->setObjectName(QStringLiteral("cbStockType"));
        cbStockType->setMinimumSize(QSize(105, 0));
        cbStockType->setMaximumSize(QSize(105, 16777215));
        cbStockType->setFont(font1);

        horizontalLayout->addWidget(cbStockType);

        txtId = new QLineEdit(page);
        txtId->setObjectName(QStringLiteral("txtId"));
        txtId->setMinimumSize(QSize(90, 0));
        txtId->setMaximumSize(QSize(90, 16777215));
        QFont font2;
        font2.setPointSize(12);
        txtId->setFont(font2);

        horizontalLayout->addWidget(txtId);

        stackSelectType->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(5);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(5, 0, 5, 0);
        cbTaifexType = new QComboBox(page_2);
        cbTaifexType->setObjectName(QStringLiteral("cbTaifexType"));
        cbTaifexType->setFont(font1);

        gridLayout_2->addWidget(cbTaifexType, 0, 0, 1, 1);

        cbTaifexId = new QComboBox(page_2);
        cbTaifexId->setObjectName(QStringLiteral("cbTaifexId"));
        cbTaifexId->setFont(font1);

        gridLayout_2->addWidget(cbTaifexId, 0, 1, 1, 1);

        stackSelectType->addWidget(page_2);
        stackSelectItem = new QStackedWidget(groupBox);
        stackSelectItem->setObjectName(QStringLiteral("stackSelectItem"));
        stackSelectItem->setGeometry(QRect(403, 33, 600, 91));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout = new QGridLayout(page_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(5, 0, 5, 0);
        btnTick = new QPushButton(page_3);
        btnTick->setObjectName(QStringLiteral("btnTick"));
        btnTick->setMinimumSize(QSize(60, 0));
        btnTick->setFont(font2);
        btnTick->setCheckable(true);
        btnTick->setChecked(false);

        gridLayout->addWidget(btnTick, 0, 0, 1, 1);

        btn1k = new QPushButton(page_3);
        btn1k->setObjectName(QStringLiteral("btn1k"));
        btn1k->setMinimumSize(QSize(60, 0));
        btn1k->setFont(font2);
        btn1k->setCheckable(true);
        btn1k->setChecked(false);

        gridLayout->addWidget(btn1k, 0, 1, 1, 1);

        btn3k = new QPushButton(page_3);
        btn3k->setObjectName(QStringLiteral("btn3k"));
        btn3k->setMinimumSize(QSize(60, 0));
        btn3k->setFont(font2);
        btn3k->setCheckable(true);

        gridLayout->addWidget(btn3k, 0, 2, 1, 1);

        btn5k = new QPushButton(page_3);
        btn5k->setObjectName(QStringLiteral("btn5k"));
        btn5k->setMinimumSize(QSize(60, 0));
        btn5k->setFont(font2);
        btn5k->setCheckable(true);

        gridLayout->addWidget(btn5k, 0, 3, 1, 1);

        btn10k = new QPushButton(page_3);
        btn10k->setObjectName(QStringLiteral("btn10k"));
        btn10k->setMinimumSize(QSize(60, 0));
        btn10k->setFont(font2);
        btn10k->setCheckable(true);

        gridLayout->addWidget(btn10k, 0, 4, 1, 1);

        btn15k = new QPushButton(page_3);
        btn15k->setObjectName(QStringLiteral("btn15k"));
        btn15k->setMinimumSize(QSize(60, 0));
        btn15k->setFont(font2);
        btn15k->setCheckable(true);

        gridLayout->addWidget(btn15k, 0, 5, 1, 1);

        btn30k = new QPushButton(page_3);
        btn30k->setObjectName(QStringLiteral("btn30k"));
        btn30k->setMinimumSize(QSize(60, 0));
        btn30k->setFont(font2);
        btn30k->setCheckable(true);

        gridLayout->addWidget(btn30k, 0, 6, 1, 1);

        stackSelectItem->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        stackSelectItem->addWidget(page_4);

        gridLayout_3->addWidget(groupBox, 0, 2, 1, 1);


        gridLayout_4->addWidget(wBg, 0, 0, 1, 1);


        retranslateUi(LayerTopMenu);

        stackSelectType->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LayerTopMenu);
    } // setupUi

    void retranslateUi(QWidget *LayerTopMenu)
    {
        LayerTopMenu->setWindowTitle(QApplication::translate("LayerTopMenu", "Form", 0));
        groupBox->setTitle(QString());
        cbKind->clear();
        cbKind->insertItems(0, QStringList()
         << QApplication::translate("LayerTopMenu", "\350\202\241\347\245\250", 0)
         << QApplication::translate("LayerTopMenu", "\346\234\237\350\262\250", 0)
        );
        cbStockType->clear();
        cbStockType->insertItems(0, QStringList()
         << QApplication::translate("LayerTopMenu", "\344\270\212\345\270\202\350\202\241\347\245\250", 0)
         << QApplication::translate("LayerTopMenu", "\344\270\212\346\253\203\350\202\241\347\245\250", 0)
         << QApplication::translate("LayerTopMenu", "\350\210\210\346\253\203\350\202\241\347\245\250", 0)
         << QApplication::translate("LayerTopMenu", "\344\270\212\345\270\202\346\254\212\350\255\211", 0)
         << QApplication::translate("LayerTopMenu", "\344\270\212\346\253\203\346\254\212\350\255\211", 0)
        );
        txtId->setPlaceholderText(QApplication::translate("LayerTopMenu", "\350\253\213\350\274\270\345\205\245\344\273\243\350\231\237", 0));
        cbTaifexType->clear();
        cbTaifexType->insertItems(0, QStringList()
         << QApplication::translate("LayerTopMenu", "\350\202\241\347\245\250\346\234\237\350\262\250", 0)
         << QApplication::translate("LayerTopMenu", "\351\201\270\346\223\207\346\254\212", 0)
        );
        cbTaifexId->clear();
        cbTaifexId->insertItems(0, QStringList()
         << QApplication::translate("LayerTopMenu", "\345\244\247\345\217\260\346\214\207", 0)
         << QApplication::translate("LayerTopMenu", "\345\260\217\345\217\260\346\214\207", 0)
        );
        btnTick->setText(QApplication::translate("LayerTopMenu", "BY TICK", 0));
        btn1k->setText(QApplication::translate("LayerTopMenu", "1\345\210\206k\347\267\232", 0));
        btn3k->setText(QApplication::translate("LayerTopMenu", "3\345\210\206k\347\267\232", 0));
        btn5k->setText(QApplication::translate("LayerTopMenu", "5\345\210\206k\347\267\232", 0));
        btn10k->setText(QApplication::translate("LayerTopMenu", "10\345\210\206k\347\267\232", 0));
        btn15k->setText(QApplication::translate("LayerTopMenu", "15\345\210\206k\347\267\232", 0));
        btn30k->setText(QApplication::translate("LayerTopMenu", "30\345\210\206k\347\267\232", 0));
    } // retranslateUi

};

namespace Ui {
    class LayerTopMenu: public Ui_LayerTopMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERTOPMENU_H
