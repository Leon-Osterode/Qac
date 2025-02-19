QT       += core gui svg multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    drivesound.cpp \
    main.cpp \
    mainwindow.cpp \
    vehicle.cpp \
    vehicledisplay.cpp

HEADERS += \
    drivesound.h \
    mainwindow.h \
    vehicle.h \
    vehicledisplay.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
