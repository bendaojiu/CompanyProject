#-------------------------------------------------
#
# Project created by QtCreator 2016-08-11T16:50:08
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mymysql.cpp

HEADERS  += mainwindow.h \
    mymysql.h \
    name.h

DISTFILES +=

RESOURCES += \
    image.qrc
