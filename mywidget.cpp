#include "mywidget.h"
#include <QThread>
#include <QPushButton>
#include <QRadioButton>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    qDebug() << Q_FUNC_INFO << Qt::endl;

    QRadioButton *b2 = new QRadioButton("Stop", this);
    QPushButton *b3 = new QPushButton("Start", this);
    b3->setGeometry(0, 200, 100, 60);

    connect(b3,
            &QPushButton::clicked,
            this,
            &MyWidget::startDataCollection);

    connect(b2,
            &QRadioButton::clicked,
            this,
            &MyWidget::stopDataCollection);
}

void MyWidget::startDataCollection()
{
    qDebug() << Q_FUNC_INFO << Qt::endl;
    QThread::sleep(10);
}

void MyWidget::stopDataCollection()
{
    qDebug() << Q_FUNC_INFO << Qt::endl;
}

MyWidget::~MyWidget() {}
