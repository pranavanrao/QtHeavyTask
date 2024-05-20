#include "mydatacollection.h"
#include "plcdc.h"

#include <QThread>
#include <QDebug>

MyDataCollection::MyDataCollection(QObject *parent)
    : QThread{parent}
{
    qDebug() << Q_FUNC_INFO << QThread::currentThreadId();
}

void MyDataCollection::run()
{
    qDebug() << Q_FUNC_INFO << QThread::currentThreadId();

    PlcDc *plc = new PlcDc;
    plc->startDC();

    m_godrej->lock();
    qDebug() << "Lock Started : " << QThread::currentThreadId();
    m_data->name() = "Pranav_"+this->objectName();
    m_data->m_phone = "1234567890";
    m_data->m_pin = 12345;
    QThread::sleep(7);
    qDebug() << "Unlock Started : " << QThread::currentThreadId();
    m_godrej->unlock();
}

MyData *MyDataCollection::data() const
{
    return m_data;
}

void MyDataCollection::setData(MyData *data)
{
    m_data = data;
}

QMutex *MyDataCollection::godrej() const
{
    return m_godrej;
}

void MyDataCollection::setGodrej(QMutex *newGodrej)
{
    m_godrej = newGodrej;
}
