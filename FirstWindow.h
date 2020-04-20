//
// Created by upupu on 20/04/2020.
//

#ifndef QT_PROJECT_FIRSTWINDOW_H
#define QT_PROJECT_FIRSTWINDOW_H


#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>

class FirstWindow : public QWidget {
private:
    QPushButton* newGame;
    QPushButton* leaderboard;
    QPushButton* quitGame;
public:
    FirstWindow(QWidget* = nullptr);
};


#endif //QT_PROJECT_FIRSTWINDOW_H
