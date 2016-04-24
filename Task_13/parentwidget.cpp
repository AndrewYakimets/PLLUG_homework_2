#include "parentwidget.h"

ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
    btn = new QPushButton("Add", this);
    lne = new QLineEdit(this);
    hbl = new QHBoxLayout();
    hbl_2 = new QHBoxLayout();
    vbl = new QVBoxLayout();

    lne->setText("0");

    ted = new QTextEdit("0", this);

    hbl->addStretch();
    hbl->addWidget(btn);
    hbl->addWidget(lne);
    hbl_2->addWidget(ted);

    vbl->addLayout(hbl);
    vbl->addLayout(hbl_2);

    setLayout(vbl);
    setGeometry(550, 300, 140, 100);
    setWindowTitle("Task_13_Layouts");

    QObject::connect(btn, SIGNAL(clicked()), this, SLOT(showText()));
}

void ParentWidget::showText()
{
    ted->setText(lne->text());
}
