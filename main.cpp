#include <QApplication>
#include <QWidget>
#include <QPushButton>
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    window.setWindowTitle("Simple Qt App");
    window.setGeometry(100, 100, 250, 150);
    QPushButton *button1 = new QPushButton("Button 1", &window);
    button1->setGeometry(50, 50, 150, 30);
    QPushButton *button2 = new QPushButton("Button 2", &window);
    button2->setGeometry(50, 90, 150, 30);
    window.show();
    return app.exec();
}
