#-------------------------------------------------
#
# Project created by QtCreator 2023-03-01T12:40:31
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pisces
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

CONFIG += c++11

SOURCES += \
        main.cpp \
        ui/paboutdialog.cpp \
        ui/pdebugform.cpp \
        ui/pmainwin.cpp \
        thirdparty/qui/quiwidget.cpp

HEADERS += \
        ui/paboutdialog.h \
        ui/pdebugform.h \
        ui/pmainwin.h \
        thirdparty/qui/head.h \
        thirdparty/qui/quiwidget.h

FORMS += \
        ui/paboutdialog.ui \
        ui/pdebugform.ui \
        ui/pmainwin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    thirdparty/qui/main.qrc \
    thirdparty/qui/qss.qrc

DISTFILES += \
    thirdparty/qui/main.ico
