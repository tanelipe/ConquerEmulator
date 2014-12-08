#-------------------------------------------------
#
# Project created by QtCreator 2014-12-08T22:33:38
#
#-------------------------------------------------

QT       += core network

QT       -= gui

TARGET = AuthenticationServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    classes/mainctrl.cpp \
    classes/network/qserversocket.cpp \
    classes/network/qwinsockclient.cpp

HEADERS += \
    classes/mainctrl.h \
    classes/network/qserversocket.h \
    classes/network/qwinsockclient.h
