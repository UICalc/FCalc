#include "fcgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FCGUI w;
    w.show();

    return a.exec();
}
