QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Tarea5-DanielRoa
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    poligono.cpp \
    arc.cpp \
    cubo.cpp \
    prismaRectangular.cpp \
    prismaTriangular.cpp \
    cono.cpp \
    transformaciones.cpp

HEADERS  += dialog.h \
    poligono.h \
    arc.h \
    cubo.h \
    prismaRectangular.h \
    prismaTriangular.h \
    cono.h \
    transformaciones.h

FORMS    += dialog.ui \
    poligono.ui \
    arc.ui \
    cubo.ui \
    prismaRectangular.ui \
    prismaTriangular.ui \
    cono.ui

CONFIG-=app_bundle
