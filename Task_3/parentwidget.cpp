#include "parentwidget.h"

ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
    btn = new QPushButton("Button", this);
    btn->setGeometry(100, 35, 100, 30);

    lne = new QLineEdit(this);
    lne->setGeometry(100, 0, 100, 30);
    lne->setText("Button_name");
    lne->selectAll();

    setGeometry(550, 300, 250, 250);
    setWindowTitle("Task_3_Btn_&_lineEdit");

    QObject::connect(btn, SIGNAL(clicked()), this, SLOT(setNameForBtn()));
}

void ParentWidget::setNameForBtn()
{
    btn->setText(lne->text());
}
