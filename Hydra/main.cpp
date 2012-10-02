#include <QtGui/QApplication>
#include "artemidas.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Artemidas w;
    w.show();
    
    return a.exec();
}
