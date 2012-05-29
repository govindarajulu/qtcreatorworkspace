TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.c


unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += pthread

OTHER_FILES += \
    Makefile
