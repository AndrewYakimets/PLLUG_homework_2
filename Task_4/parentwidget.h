#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

class ParentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ParentWidget(QWidget *parent = 0);

    QPushButton *btn;
    QLineEdit *lne_a;
    QLineEdit *lne_b;
    QLabel *lbl;

signals:

public slots:
    void add();
};

#endif // PARENTWIDGET_H
