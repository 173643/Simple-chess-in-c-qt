#include "szachy.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Szachy w;
    w.show();
    return a.exec();
}
