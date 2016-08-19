#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QPushButton>
#include "name.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QMenu *loginMenu;
    QMenu *kufangMenu;
    QMenu *shebeiMenu;
    QMenu *helpMenu;

    QAction *loginAction;
    QAction *exitAction;

    QAction *chukuAction;
    QAction *rukuAction;
    QAction *kucunAction;

    QAction *shebeichaxunAction;

    QAction *helpAction;
    QAction *aboutAction;

    QPushButton *btn;
};

#endif // MAINWINDOW_H
