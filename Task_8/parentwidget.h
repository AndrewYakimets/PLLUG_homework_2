#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>
#include <QSpinBox>
#include <QProgressBar>
#include <QSlider>

class ParentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ParentWidget(QWidget *parent = 0);

    QSpinBox *spb;
    QProgressBar *pb;
    QSlider *sl;

signals:

public slots:
    void changeSlGeometry();

};

#endif // PARENTWIDGET_H
