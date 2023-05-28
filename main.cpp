#include <QtCore/qmath.h>
#include <QApplication>
#include "chooseoption.h"
#include "option.h"
#include "information.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Option* option = new Option;
    Information inf(option);
    inf.show();
    return a.exec();
}
