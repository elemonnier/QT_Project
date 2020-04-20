//
// Created by upupu on 20/04/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "FirstWindow.h"

FirstWindow::FirstWindow(QWidget* parent) : QWidget(parent) {
    this->setWindowTitle("Welcome!");
    this->setMinimumSize(600, 400);
    auto layout = new QVBoxLayout;
    this->newGame = new QPushButton("New Game");
    layout->addWidget(this->newGame);
    this->leaderboard = new QPushButton("Leaderboard");
    layout->addWidget(this->leaderboard);
    this->quitGame = new QPushButton("Quit Game");
    layout->addWidget(this->quitGame);
    this->setLayout(layout);
}
