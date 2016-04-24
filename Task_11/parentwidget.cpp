#include "parentwidget.h"

ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
    timer = new QTimer(this);

    RbRed = new QRadioButton("Red", this);
    RbRed->setGeometry(70, 20, 100, 20);

    RbYellow = new QRadioButton("Yellow", this);
    RbYellow->setGeometry(70, 50, 100, 20);

    RbGreen = new QRadioButton("Green", this);
    RbGreen->setGeometry(70, 80, 100, 20);

    StartBtn = new QPushButton("Start", this);
    StartBtn->setGeometry(50, 110, 100, 30);

    StopBtn = new QPushButton("Stop", this);
    StopBtn->setGeometry(50, 150, 100, 30);

    setGeometry(550, 300, 200, 190);
    setMaximumSize(200, 190);
    setMinimumSize(200, 190);
    setWindowTitle("Task_11_Traffic_lights");

    RbRed->setEnabled(false);
    RbYellow->setEnabled(false);
    RbGreen->setEnabled(false);

    connect(StartBtn, SIGNAL(clicked()), this, SLOT(start()));
    connect(StopBtn, SIGNAL(clicked()), this, SLOT(stop()));

    StopBtn->setEnabled(false);
}

void ParentWidget::start()
{
    StartBtn->setEnabled(false);
    StopBtn->setEnabled(true);

    RbRed->setChecked(true);

    disconnect(timer, SIGNAL(timeout()), this, SLOT(start()));
    timer->stop();

    connect(timer, SIGNAL(timeout()), this, SLOT(checkForYellow()));
    timer->start(7000);
}

void ParentWidget::stop()
{
    StartBtn->setEnabled(true);
    StopBtn->setEnabled(false);

    timer->stop();
    disconnect(timer, SIGNAL(timeout()), this, SLOT(start()));
    disconnect(timer, SIGNAL(timeout()), this, SLOT(checkForYellow()));
    disconnect(timer, SIGNAL(timeout()), this, SLOT(changeOnGreen()));

    RbRed ->setChecked(false);
    RbYellow->setChecked(false);
    RbGreen->setChecked(false);
}

void ParentWidget::checkForYellow()
{
    if(RbGreen->isChecked())
    {
        RbYellow->setChecked(true);

        disconnect(timer, SIGNAL(timeout()), this, SLOT(checkForYellow()));
        timer->stop();
        connect(timer, SIGNAL(timeout()), this, SLOT(start()));
        timer->start(1700);
    }
    else
    {
        RbYellow->setChecked(true);

        disconnect(timer, SIGNAL(timeout()), this, SLOT(checkForYellow()));
        timer->stop();
        connect(timer, SIGNAL(timeout()), this, SLOT(changeOnGreen()));
        timer->start(1700);
    }
}

void ParentWidget::changeOnGreen()
{
    RbGreen->setChecked(true);

    disconnect(timer, SIGNAL(timeout()), this, SLOT(changeOnGreen()));
    timer->stop();
    connect(timer, SIGNAL(timeout()), this, SLOT(checkForYellow()));
    timer->start(7000);
}
