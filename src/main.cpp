#include <QCoreApplication>
#include<QDebug>
#include <QThread>

#include "A.hpp"
#include "B.hpp"

int main(int argc, char *argv[])
{
    qInfo() << "Main is starting " << QThread::currentThreadId();

    QCoreApplication app(argc, argv);

    A a;
    B b;

    a.subecribe();
    b.subecribe();
    b.publish();
    a.publish();



    return app.exec();
}
