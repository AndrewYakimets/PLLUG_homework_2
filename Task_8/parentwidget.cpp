#include "parentwidget.h"

ParentWidget::ParentWidget(QWidget *parent) : QWidget(parent)
{
   spb = new QSpinBox(this);
   spb->setGeometry(60, 20, 60, 20);

   pb = new QProgressBar(this);
   pb->setGeometry(20, 60, 150, 30);

   sl = new QSlider(this);
   sl->setGeometry(50, 100, 50, 70);

   setGeometry(550, 300, 180, 220);
   setWindowTitle("Task_8_Widget's_Signals_&_Slots");

   connect(spb, SIGNAL(valueChanged(int)), this, SLOT(changeSlGeometry()));
   connect(sl, SIGNAL(valueChanged(int)), pb, SLOT(setValue(int)));
   connect(spb, SIGNAL(valueChanged(int)), pb, SLOT(setValue(int)));
   connect(spb, SIGNAL(valueChanged(int)), sl, SLOT(setValue(int)));
}

void ParentWidget::changeSlGeometry()
{
    sl->setGeometry(50 + (int)spb->value(), 100 + (int)spb->value(), 50, 70);
}
