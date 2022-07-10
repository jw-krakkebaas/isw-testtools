import QtQuick
import "View"
import InstrumentControlPanel.ViewModel

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")  

    ScanForInstrumentsParameterInput {}

    Component.onCompleted: ScanForInstrumentsParameterInputVM.loadConfiguration()
}
