#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QWidget>
#include <QLabel>

class ParentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ParentWidget(QWidget *parent = 0);

    QLabel *lbl;

signals:

public slots:
};

#endif // PARENTWIDGET_H
