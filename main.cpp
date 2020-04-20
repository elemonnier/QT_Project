#include <iostream>
#include <QApplication>
#include "FirstWindow.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);

    auto FW = new FirstWindow();
    FW->show();

    return app.exec();
}