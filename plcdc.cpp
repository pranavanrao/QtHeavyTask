#include "plcdc.h"

#include <QDebug>
#include <QThread>

PlcDc::PlcDc(QObject *parent)
    : QObject{parent}
{}

void PlcDc::startDC()
{
    qDebug() << Q_FUNC_INFO << QThread::currentThreadId();
    QThread::sleep(10);
}
