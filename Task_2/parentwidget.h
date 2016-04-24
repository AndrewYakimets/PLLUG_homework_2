#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>
#include <QPushButton>

class ParentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ParentWidget(QWidget *parent = 0);

    QPushButton *btn;
    QPushButton *btn_2;

signals:

public slots:
    void setRandomGeometryForBtn();
};

#endif // PARENTWIDGET_H
