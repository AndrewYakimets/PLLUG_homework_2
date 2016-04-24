#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>

class ParentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ParentWidget(QWidget *parent = 0);

    QPushButton *btn;
    QLineEdit *lne;
    QTextEdit *ted;
    QHBoxLayout *hbl;
    QHBoxLayout *hbl_2;
    QVBoxLayout *vbl;

signals:

public slots:
    void showText();
};

#endif // PARENTWIDGET_H
