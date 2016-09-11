QT += core
QT -= gui

CONFIG += c++11

TARGET = TickListen
CONFIG += console
CONFIG -= app_bundle

include($$PWD/../M5Lib/include/M5Lib.pri)

DESTDIR = $$PWD/../bin/
OBJECTS_DIR = $$PWD/obj
MOC_DIR = $$PWD/obj
UI_DIR = $$PWD/obj/ui_header

TEMPLATE = app

SOURCES += main.cpp \
    utils.c \
    CRabbitMq.cpp \
    CTestTick.cpp

HEADERS += \
    utils.h \
    CRabbitMq.h \
    CTestTick.h


LIBS += -L$$PWD/../M5Lib/ -lM5Lib$${OS}
INCLUDEPATH += $$PWD/../M5Lib/include
DEPENDPATH += $$PWD/../M5Lib/include

PRE_TARGETDEPS += $$PWD/../M5Lib/libM5Lib$${OS}.a

#win32: INCLUDEPATH += $$PWD/../../rabbitmq-c/include
#win32: LIBS += -L$$PWD/../../rabbitmq-c/bin -lrabbitmq.4

INCLUDEPATH+=/usr/include/

unix:!macx{
LIBS += -lrabbitmq
}



#unix: CONFIG += link_pkgconfig
#unix: PKGCONFIG += librabbitmq-dev
