#-------------------------------------------------
#
# Project created by QtCreator 2018-04-11T14:45:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Assignment1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    ball.cpp \
    table.cpp \
    stage1ballbuilder.cpp \
    dialog.cpp \
    main.cpp \
    stage1ball.cpp \
    stage1factory.cpp \
    balldirector.cpp \
    vector.cpp

HEADERS += \
    ball.h \
    table.h \
    ballbuilder.h \
    stage1ballbuilder.h \
    dialog.h \
    stage1Factory.h \
    factory.h \
    balldirector.h \
    stage1ball.h \
    vector.h

FORMS +=
