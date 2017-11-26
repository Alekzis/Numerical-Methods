#include "sistema.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    sistema w;
    w.show();

    return a.exec();
}
