
QT       += network sql testlib

win32{
OS=Win

}
unix:!macx{

#linux-arm-gnueabi {
#    //ARM stuff here
#}

OS=Linux
}
mac:!macx{
OS=Ios
}
macx{
OS=Osx
}
android{
OS=Android
}

TARGET = $$TARGET$${OS}

INCLUDEPATH+= \
            $$PWD \


HEADERS += \
    $$PWD/M5Library.h \
    $$PWD/Network.h \
    $$PWD/DataBase.h

SOURCES += \

