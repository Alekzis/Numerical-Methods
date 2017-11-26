#-------------------------------------------------
#
# Project created by QtCreator 2017-11-23T15:29:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sistemademetodos
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        sistema.cpp \
    diferenciacion.cpp \
    eligau.cpp \
    euler.cpp \
    gauss.cpp \
    integracion.cpp \
    lagrange.cpp \
    newton.cpp \
    punto.cpp \
    regmult.cpp \
    regresion.cpp \
    runge.cpp

HEADERS += \
        sistema.h \
    diferenciacion.h \
    eligau.h \
    euler.h \
    gauss.h \
    integracion.h \
    lagrange.h \
    newton.h \
    punto.h \
    regmult.h \
    regresion.h \
    runge.h

FORMS += \
        sistema.ui \
    diferenciacion.ui \
    eligau.ui \
    euler.ui \
    gauss.ui \
    integracion.ui \
    lagrange.ui \
    newton.ui \
    punto.ui \
    regmult.ui \
    regresion.ui \
    runge.ui
