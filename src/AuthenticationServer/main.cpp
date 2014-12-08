#include <QCoreApplication>
#include "classes/mainctrl.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MainCtrl main;
    main.Initialize();
    return a.exec();
}
