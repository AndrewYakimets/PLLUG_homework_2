#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QString>

class ParentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ParentWidget(QWidget *parent = 0);

    QPushButton *btn;
    QLineEdit *lne;

signals:

public slots:
    void setNameForBtn();
};

#endif // PARENTWIDGET_H
