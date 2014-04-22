#-------------------------------------------------
#
# Project created by QtCreator 2014-04-20T23:58:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = yd4u
TEMPLATE = app

#INCLUDEPATH += /usr/include/libappindicator3-0.1\
#        /usr/include/gtk-2.0\
#        /usr/include/glib-2.0\
#        /usr/lib/x86_64-linux-gnu/gtk-2.0/include\
#        /usr/lib/x86_64-linux-gnu/glib-2.0/include\
#        /usr/include/cairo\
#        /usr/include/pango-1.0\
#        /usr/include/gdk-pixbuf-2.0\
#        /usr/include/atk-1.0\

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
