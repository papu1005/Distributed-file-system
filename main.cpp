#include "mainwindow.h"
#include <QApplication>
#include "login.h"
#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();

    return a.exec();
}

