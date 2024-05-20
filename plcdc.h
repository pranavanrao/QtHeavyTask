#ifndef PLCDC_H
#define PLCDC_H

#include <QObject>

class PlcDc : public QObject
{
    Q_OBJECT
public:
    explicit PlcDc(QObject *parent = nullptr);

public slots:
    void startDC();

signals:
};

#endif // PLCDC_H
