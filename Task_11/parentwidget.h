#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QRadioButton>
#include <QTimer>
#include <QPalette>

class ParentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ParentWidget(QWidget *parent = 0);

    QRadioButton *RbRed;
    QRadioButton *RbYellow;
    QRadioButton *RbGreen;
    QPushButton *StartBtn;
    QPushButton *StopBtn;
    QTimer *timer;

signals:

public slots:
    void start();
    void stop();
    void checkForYellow();
    void changeOnGreen();
};

#endif // PARENTWIDGET_H
