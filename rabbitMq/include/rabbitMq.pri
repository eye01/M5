
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

LIBS += -lrabbitmq

#linux       sudo apt-get install librabbitmq-dev

