#include <QApplication>
#include "parentwidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ParentWidget parent;
    parent.show();

    return app.exec();
}
