
QT       += 

INCLUDEPATH+= \
            $$PWD \
            $$PWD/include/ \


HEADERS += \
    $$PWD/ListenTick.h \
    $$PWD/../utils.h \
    $$PWD/TestTick.h

SOURCES += \
    $$PWD/../ListenTick.cpp \
    $$PWD/../utils.c \
    $$PWD/../TestTick.cpp

win32: INCLUDEPATH += $$PWD/../../rabbitmq-c/include
win32: LIBS += -L$$PWD/../../rabbitmq-c/bin -lrabbitmq.4


unix:!macx{
LIBS += -lrabbitmq
}
#linux-arm-gnueabi {
#    //ARM stuff here
#}
#linux       sudo apt-get install librabbitmq-dev

