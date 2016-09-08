#-------------------------------------------------
#
# Project created by QtCreator 2016-08-26T09:33:20
#
#-------------------------------------------------

QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = M5Client
TEMPLATE = app


include($$PWD/../M5Lib/include/M5Lib.pri)
include($$PWD/../rabbitMq/include/rabbitMq.pri)
win32{
OS=windows
TARGET = M5ClientWin
}
unix:!macx{
OS=linux
TARGET = M5ClientLinux
}
mac:!macx{
OS=ios
TARGET = M5ClientIos
}
macx{
OS=osx
TARGET = M5ClientMac
}
android{
OS=android
TARGET = M5ClientAndroid
}


DESTDIR = $$PWD/../bin/
OBJECTS_DIR = $$PWD/obj
MOC_DIR = $$PWD/obj
UI_DIR = $$PWD/obj/ui_header

INCLUDEPATH +=$$PWD/../

SOURCES += main.cpp\
        widget.cpp \
    LayerStock.cpp \
    TableModel.cpp \
    ModelStock.cpp \
    StageChart.cpp \
    LayerBarDiagram.cpp \
    LayerChartBase.cpp \
    Global.cpp \
    DataProvider.cpp \
    ModelBarDiagram.cpp \
    LayerTopMenu.cpp \
    CStreamData.cpp \
    CKLineData.cpp

HEADERS  += widget.h \
    LayerStock.h \
    tools_export.h \
    TableModel.h \
    ModelStock.h \
    StageChart.h \
    LayerBarDiagram.h \
    LayerChartBase.h \
    Global.h \
    DataProvider.h \
    ModelBarDiagram.h \
    LayerTopMenu.h \
    CStreamData.h \
    CDefine.h \
    CKLineData.h

FORMS    += widget.ui \
    LayerStock.ui \
    StageChart.ui \
    LayerBarDiagram.ui \
    LayerTopMenu.ui

unix:!macx: LIBS += -L$$PWD/../M5Lib/ -lM5Lib

INCLUDEPATH += $$PWD/../M5Lib/include
DEPENDPATH += $$PWD/../M5Lib/include





unix:!macx: PRE_TARGETDEPS += $$PWD/../M5Lib/libM5Lib.a

unix:!macx: LIBS += -L$$PWD/../KDChart-2.6.0/lib/ -ltesttools

INCLUDEPATH += $$PWD/../KDChart-2.6.0/include/KDGantt
DEPENDPATH += $$PWD/../KDChart-2.6.0/include/KDGantt

unix:!macx: LIBS += -L$$PWD/../KDChart-2.6.0/lib/ -lkdchart

INCLUDEPATH += $$PWD/../KDChart-2.6.0/include/KDChart
DEPENDPATH += $$PWD/../KDChart-2.6.0/include/KDChart

INCLUDEPATH += $$PWD/../KDChart-2.6.0/examples/tools
DEPENDPATH += $$PWD/../KDChart-2.6.0/examples/tools

RESOURCES += \
    res.qrc
