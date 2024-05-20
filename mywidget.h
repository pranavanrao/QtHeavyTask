#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QDebug>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    void startDataCollection();
    void stopDataCollection();
    ~MyWidget();
};
#endif // MYWIDGET_H
