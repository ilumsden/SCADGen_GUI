TEMPLATE = app
TARGET = SCADGen

HEADERS = \
    include/mainwindow.h
SOURCES = \
    src/mainwindow.cpp \
    src/main.cpp

QT = core gui 3drender
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
