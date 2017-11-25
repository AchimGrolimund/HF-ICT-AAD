TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    graph.cpp \
    graphutil.cpp \
    graphgen.cpp

HEADERS += \
    graph.h \
    graphutil.h \
    graphgen.h
