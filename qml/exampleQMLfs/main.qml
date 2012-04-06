// import QtQuick 1.0 // to target S60 5th Edition or Maemo 5
import QtQuick 1.1

ListView {
    id: view
    width: 300
    height: 93

    model: VisualDataModel {
        model: dirModel

        delegate: Rectangle {
            width: 200; height: 25
            Text { text: filePath }

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    if (model.hasModelChildren)
                        view.model.rootIndex = view.model.modelIndex(index)
                }
            }
        }
    }
}
