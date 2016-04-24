#include "parentwidget.h"

ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
    btn = new QPushButton("Add", this);
    btn->setGeometry(20, 35, 100, 30);

    lne_a = new QLineEdit(this);
    lne_b = new QLineEdit(this);

    lne_a->setGeometry(40 ,0, 30, 30);
    lne_a->setText("0");

    lne_b->setGeometry(80 ,0, 30, 30);
    lne_b->setText("0");

    lbl = new QLabel("0", this);
    lbl->setGeometry(70, 60, 100, 30);

    setGeometry(550, 300, 140, 100);
    setWindowTitle("Task_4_Calc");

    QObject::connect(btn, SIGNAL(clicked()), this, SLOT(add()));
}

void ParentWidget::add()
{
    lbl->setText(QString::number(lne_a->text().toInt() + lne_b->text().toInt()));
}
