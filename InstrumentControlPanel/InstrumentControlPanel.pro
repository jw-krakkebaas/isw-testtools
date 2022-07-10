QT += quick network

SOURCES += \
        Model/allnetworkadaptersmodel.cpp \
        ViewModel/scanforinstrumentsparameterinputvm.cpp \
        main.cpp

resources.files = main.qml View/ScanForInstrumentsParameterInput.qml
resources.prefix = /$${TARGET}
RESOURCES += resources \

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH = View/

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

DISTFILES += \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Model/allnetworkadaptersmodel.h \
    ViewModel/scanforinstrumentsparameterinputvm.h
