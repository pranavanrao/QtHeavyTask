#include "mywidget.h"
#include "mydatacollection.h"
#include "mydata.h"

#include <QApplication>
#include <QDebug>
#include <QThread>
#include <QMutex>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug() << Q_FUNC_INFO << QThread::currentThreadId();
    MyWidget w;
    w.show();

    qDebug() << "Data collection is complete";

    MyDataCollection col;
    MyDataCollection col2;

    MyData* data = new MyData;
    QMutex mutex;

    col.setData(data);
    col2.setData(data);
    col.setGodrej(&mutex);
    col2.setGodrej(&mutex);
    col.start();
    col2.start();
    return a.exec();
}
