#ifndef MYDATACOLLECTION_H
#define MYDATACOLLECTION_H

#include "mydata.h"

#include <QThread>
#include <QMutex>

class MyDataCollection : public QThread
{
public:
    explicit MyDataCollection(QObject *parent = nullptr);

    // MyDataCollection();

    QMutex *godrej() const;
    void setGodrej(QMutex *newGodrej);

    MyData *data() const;
    void setData(MyData *data);

protected:
    void run();

private:
    MyData *m_data;
    QMutex *m_godrej;
};

#endif // MYDATACOLLECTION_H
