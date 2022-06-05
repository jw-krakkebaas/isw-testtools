QT += quick

SOURCES += \
        main.cpp

resources.files = main.qml View/Sc
resources.prefix = /$${TARGET}
RESOURCES += resources \
    mainresources.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH = View/

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

DISTFILES += \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
