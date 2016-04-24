#include "parentwidget.h"

#include <QPushButton>
#include <stdlib.h>

ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
    btn = new QPushButton("Close", this);
    btn_2 = new QPushButton("Change", this);

    btn->setGeometry(100, 35, 100, 30);
    btn_2->setGeometry(0, 0, 70, 30);

    setGeometry(550, 300, 250, 250);
    setWindowTitle("Task_2_Two_buttons");

    QObject::connect(btn, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(btn_2, SIGNAL(clicked()), this, SLOT(setRandomGeometryForBtn()));
}

void ParentWidget::setRandomGeometryForBtn()
{
    int w = rand() % 150 + 30;
    int h = rand() % 150 + 30;
    int x = rand() % 120 + 20;
    int y = rand() % 120 + 20;

    btn->setGeometry(x, y, w, h);
}
