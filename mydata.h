#ifndef MYDATA_H
#define MYDATA_H

#include <QDebug>
#include <QString>

class MyData
{
public:
    MyData();

    QString m_name;
    QString m_phone;
    int m_pin;

    QString name() const;
    void setName(const QString &newName);

    QString phone() const;
    void setPhone(const QString &newPhone);

    int pin() const;
    void setPin(int newPin);
};

#endif // MYDATA_H
