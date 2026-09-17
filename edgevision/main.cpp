#include "edgevision.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EdgeVision w;
    w.show();
    return a.exec();
}
