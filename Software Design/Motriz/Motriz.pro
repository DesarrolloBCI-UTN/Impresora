#-------------------------------------------------
#
# Project created by QtCreator 2018-04-10T14:15:16
#
#-------------------------------------------------
QT       += core gui network serialport
QMAKE_CXXFLAGS += -std=c++0x
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Motriz
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tcp_server.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    imagenes.qrc
