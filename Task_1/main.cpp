#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPushButton btn;

    btn.setGeometry(200, 250, 100, 70);
    btn.setText("Close");

    btn.setWindowTitle("Task_1_Close_button");
    QObject::connect(&btn, SIGNAL(clicked()), &app, SLOT(quit()));

    btn.show();

    return app.exec();
}
