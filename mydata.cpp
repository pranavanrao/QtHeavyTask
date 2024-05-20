#include "mydata.h"

MyData::MyData() {}

int MyData::pin() const
{
    return m_pin;
}

void MyData::setPin(int newPin)
{
    m_pin = newPin;
}

QString MyData::phone() const
{
    return m_phone;
}

void MyData::setPhone(const QString &newPhone)
{
    m_phone = newPhone;
}

QString MyData::name() const
{
    return m_name;
}

void MyData::setName(const QString &newName)
{
    m_name = newName;
}
