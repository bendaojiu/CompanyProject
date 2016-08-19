#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    loginAction = new QAction(QIcon("image/login.png"), QString::fromLocal8Bit("登录"));
    exitAction = new QAction(QIcon("image/exit.png"), QString::fromLocal8Bit("退出"));

    loginMenu = new QMenu(QString::fromLocal8Bit("登录"));
    loginMenu->addAction(this->loginAction);
    loginMenu->addAction(this->exitAction);

    rukuAction = new QAction(QIcon("image/ruku.png"), QString::fromLocal8Bit("入库"));
    chukuAction = new QAction(QIcon("image/chuku.png"), QString::fromLocal8Bit("出库"));
    kucunAction = new QAction(QIcon("image/kufang.png"), QString::fromLocal8Bit("库存查询"));

    kufangMenu = new QMenu(QString::fromLocal8Bit("库房管理"));
    kufangMenu->addAction(this->rukuAction);
    kufangMenu->addAction(this->chukuAction);
    kufangMenu->addAction(this->kucunAction);

    shebeichaxunAction = new QAction(QIcon("image/shebei1.png"), QString::fromLocal8Bit("设备账目"));

    shebeiMenu = new QMenu(QString::fromLocal8Bit("设备管理"));
    shebeiMenu->addAction(this->shebeichaxunAction);

    helpAction = new QAction(QString::fromLocal8Bit("帮助"));
    aboutAction = new QAction(QString::fromLocal8Bit("关于"));

    helpMenu = new QMenu(QString::fromLocal8Bit("帮助"));
    helpMenu->addAction(this->helpAction);
    helpMenu->addAction(this->aboutAction);

    menuBar()->addMenu(this->loginMenu);
    menuBar()->addMenu(this->kufangMenu);
    menuBar()->addMenu(this->shebeiMenu);
    menuBar()->addMenu(this->helpMenu);

    this->setWindowTitle(QString::fromLocal8Bit("管理系统"));


}

MainWindow::~MainWindow()
{

}
