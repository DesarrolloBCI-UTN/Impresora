#-------------------------------------------------
#
# Project created by QtCreator 2018-04-10T14:15:16
#
#-------------------------------------------------
QT       += core gui network serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TCPSocket
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    funciones_block_notas.cpp \
    serie.cpp \
    tcp_server.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    imagenes.qrc
