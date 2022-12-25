TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    product.cpp \
    shop.cpp \
    worker.cpp \
    userinterface.cpp \
    stats.cpp \
    globals.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    userinterface.h \
    shift.h \
    shop.h \
    worker.h \
    date.h \
    stats.h \
    product.h \
    globals.h

