#include "viewer01.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    viewer01 window;
    window.show();
    return app.exec();
}
