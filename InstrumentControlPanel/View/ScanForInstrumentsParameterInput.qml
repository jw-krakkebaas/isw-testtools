import QtQuick 2.0
import QtQuick.Layouts
import InstrumentControlPanel.ViewModel

Item {
    Text {
        y: 10
        anchors.margins: 5
        text: ScanForInstrumentsParameterInputVM.scanStatus

        ListView {
            y:20
            width: parent.Width
            height: parent.height - y

            model: ScanForInstrumentsParameterInputVM.allNetAdapters

            delegate :  RowLayout {
                Text {
                    color: "red"
                    text : model.NetAdapter
                }
            }
        }
    }
}
