#-------------------------------------------------
#
# Project created by QtCreator 2018-05-08T11:04:49
#
#-------------------------------------------------

QT       += core gui serialport svg

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LittleFish
TEMPLATE = app
#RC_FILE = logo.rc

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32:LIBS      += -ldinput8 -ldxguid
SOURCES += main.cpp\
        displaywidget.cpp \
    myserialport.cpp \
    data.cpp \
    setformate.cpp \
    qjoystick.cpp \
    widget.cpp \
    qfi_HSI.cpp \
    MyItem.cpp

HEADERS  += displaywidget.h \
    dataformat.h \
    myserialport.h \
    data.h \
    setformate.h \
    dinputd.h \
    qjoystick.h \
    widget.h \
    qfi_HSI.h \
    MyItem.h

FORMS    += displaywidget.ui \
    myserialport.ui \
    setformate.ui
CONFIG += c++11

RESOURCES += \
    image.qrc

DISTFILES += \
    hsi/box.svg \
    hsi/gen.svg
