#include <QCoreApplication>

#include "CRabbitMq.h"
#include "CTestTick.h"
int main(int argc, char *argv[])
{
    qDebug()<<argc;
    qDebug()<<argv[0];
  QCoreApplication a(argc, argv);
    //CRabbitMq mq;
    CTestTick mq;
    mq.init(argc,argv);
  return a.exec();

}
