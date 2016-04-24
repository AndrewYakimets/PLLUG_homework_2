#include "parentwidget.h"
#include <QCoreApplication>

ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
    lbl = new QLabel("0", this);
    lbl->setGeometry(0, 0, 500, 300);

    setGeometry(500, 250, 500, 300);
    setWindowTitle("Task_12_Image_label");

    lbl->setPixmap(QPixmap(QCoreApplication::applicationDirPath() + "\\image.jpg"));
}
