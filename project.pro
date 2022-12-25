TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    product.cpp \
    shop.cpp \
    worker.cpp \
    userinterface.cpp \
    stats.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    userinterface.h \
    shift.h \
    shop.h \
    worker.h \
    date.h \
    stats.h \
    product.h

