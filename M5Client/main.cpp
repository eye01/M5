#include "widget.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QApplication::setApplicationName("M5");
    Widget w;

    w.setWindowTitle("M5 Trade v1.5");
//    MainWindow w;
    w.show();

    return a.exec();
}
