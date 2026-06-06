import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15

ApplicationWindow {
    id: root
    visible: true
    width: 980
    height: 640
    minimumWidth: 760
    minimumHeight: 520
    title: "uNexus Installer"
    color: "#070b12"

    property color accent: "#4d9eff"
    property color success: "#00ff88"
    property color warning: "#ffbd7a"
    property color danger: "#ff8a8a"
    property color panel: "#101722"
    property color raised: "#162130"
    property color border: "#26384d"
    property color textPrimary: "#ffffff"
    property color textSecondary: "#8ea4bd"
    property string uiFont: "Exo 2"

    Rectangle {
        anchors.fill: parent
        color: root.color

        Image {
            anchors.fill: parent
            source: "qrc:/UNexusInstaller/assets/wallpapers/unexus-core.png"
            fillMode: Image.PreserveAspectCrop
            opacity: 0.38
        }

        Rectangle {
            anchors.fill: parent
            color: "#cc070b12"
        }
    }

    RowLayout {
        anchors.fill: parent
        anchors.margins: 24
        spacing: 18

        Rectangle {
            Layout.preferredWidth: 286
            Layout.fillHeight: true
            radius: 8
            color: "#d9101722"
            border.color: root.border
            border.width: 1

            ColumnLayout {
                anchors.fill: parent
                anchors.margins: 18
                spacing: 16

                Image {
                    Layout.preferredWidth: 190
                    Layout.preferredHeight: 72
                    source: "qrc:/UNexusInstaller/assets/logo/SF%20White.png"
                    fillMode: Image.PreserveAspectFit
                }

                Text {
                    Layout.fillWidth: true
                    text: "Installer"
                    color: root.textPrimary
                    font.family: root.uiFont
                    font.pixelSize: 28
                    font.bold: true
                }

                StatusBlock {
                    Layout.fillWidth: true
                    label: "Shell"
                    value: installer.installed ? "Installed" : "Not installed"
                    activeColor: installer.installed ? root.success : root.warning
                }

                StatusBlock {
                    Layout.fillWidth: true
                    label: "Privileges"
                    value: installer.pkexecAvailable ? "pkexec ready" : "pkexec missing"
                    activeColor: installer.pkexecAvailable ? root.success : root.danger
                }

                StatusBlock {
                    Layout.fillWidth: true
                    label: "Repository"
                    value: installer.setupAvailable ? "Setup scripts found" : "Incomplete checkout"
                    activeColor: installer.setupAvailable ? root.success : root.danger
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.preferredHeight: 1
                    color: root.border
                }

                Text {
                    Layout.fillWidth: true
                    text: installer.repoRoot
                    color: root.textSecondary
                    wrapMode: Text.WrapAnywhere
                    font.family: root.uiFont
                    font.pixelSize: 11
                    lineHeight: 1.2
                }

                Item { Layout.fillHeight: true }

                Button {
                    Layout.fillWidth: true
                    text: "Refresh"
                    enabled: !installer.busy
                    onClicked: installer.refresh()
                }
            }
        }

        Rectangle {
            Layout.fillWidth: true
            Layout.fillHeight: true
            radius: 8
            color: "#df0d1420"
            border.color: root.border
            border.width: 1

            ColumnLayout {
                anchors.fill: parent
                anchors.margins: 18
                spacing: 14

                RowLayout {
                    Layout.fillWidth: true
                    spacing: 12

                    ColumnLayout {
                        Layout.fillWidth: true
                        spacing: 4

                        Text {
                            Layout.fillWidth: true
                            text: installer.statusTitle
                            color: root.textPrimary
                            font.family: root.uiFont
                            font.pixelSize: 22
                            font.bold: true
                        }

                        Text {
                            Layout.fillWidth: true
                            text: installer.statusDetail
                            color: root.textSecondary
                            wrapMode: Text.WordWrap
                            font.family: root.uiFont
                            font.pixelSize: 13
                        }
                    }

                    Rectangle {
                        Layout.preferredWidth: 116
                        Layout.preferredHeight: 32
                        radius: 6
                        color: installer.busy ? "#26384d" : (installer.installed ? "#143526" : "#342512")
                        border.color: installer.busy ? root.accent : (installer.installed ? root.success : root.warning)

                        Text {
                            anchors.centerIn: parent
                            text: installer.busy ? "Running" : (installer.installed ? "Ready" : "Pending")
                            color: root.textPrimary
                            font.family: root.uiFont
                            font.pixelSize: 12
                            font.bold: true
                        }
                    }
                }

                RowLayout {
                    Layout.fillWidth: true
                    spacing: 10

                    ActionButton {
                        Layout.fillWidth: true
                        label: installer.installed ? "Reinstall" : "Install"
                        enabled: !installer.busy && installer.pkexecAvailable && installer.setupAvailable
                        accentColor: root.accent
                        onClicked: installer.install()
                    }

                    ActionButton {
                        Layout.fillWidth: true
                        label: "Repair"
                        enabled: !installer.busy && installer.pkexecAvailable && installer.setupAvailable
                        accentColor: root.success
                        onClicked: installer.repair()
                    }

                    ActionButton {
                        Layout.fillWidth: true
                        label: "Diagnose"
                        enabled: !installer.busy && installer.setupAvailable
                        accentColor: root.warning
                        onClicked: installer.diagnose()
                    }

                    ActionButton {
                        Layout.fillWidth: true
                        label: "Remove"
                        enabled: !installer.busy && installer.pkexecAvailable && installer.setupAvailable && installer.installed
                        accentColor: root.danger
                        onClicked: installer.uninstall()
                    }
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.preferredHeight: 1
                    color: root.border
                }

                RowLayout {
                    Layout.fillWidth: true

                    Text {
                        Layout.fillWidth: true
                        text: "Backend Log"
                        color: root.textPrimary
                        font.family: root.uiFont
                        font.pixelSize: 15
                        font.bold: true
                    }

                    Button {
                        text: "Clear"
                        enabled: !installer.busy && installer.logText.length > 0
                        onClicked: installer.clearLog()
                    }
                }

                Rectangle {
                    Layout.fillWidth: true
                    Layout.fillHeight: true
                    radius: 8
                    color: "#ee070b12"
                    border.color: root.border
                    border.width: 1

                    ScrollView {
                        anchors.fill: parent
                        anchors.margins: 12
                        clip: true

                        TextArea {
                            text: installer.logText.length > 0 ? installer.logText : "No backend output yet."
                            readOnly: true
                            wrapMode: TextEdit.Wrap
                            color: installer.logText.length > 0 ? root.textPrimary : root.textSecondary
                            selectedTextColor: "#07101a"
                            selectionColor: root.accent
                            font.family: "monospace"
                            font.pixelSize: 12
                            background: null
                        }
                    }
                }
            }
        }
    }

    component StatusBlock: Rectangle {
        property string label: ""
        property string value: ""
        property color activeColor: root.accent

        height: 58
        radius: 8
        color: root.raised
        border.color: root.border
        border.width: 1

        RowLayout {
            anchors.fill: parent
            anchors.margins: 12
            spacing: 10

            Rectangle {
                Layout.preferredWidth: 10
                Layout.preferredHeight: 10
                radius: 5
                color: activeColor
            }

            ColumnLayout {
                Layout.fillWidth: true
                spacing: 2

                Text {
                    Layout.fillWidth: true
                    text: label
                    color: root.textSecondary
                    font.family: root.uiFont
                    font.pixelSize: 10
                    font.bold: true
                }

                Text {
                    Layout.fillWidth: true
                    text: value
                    color: root.textPrimary
                    elide: Text.ElideRight
                    font.family: root.uiFont
                    font.pixelSize: 13
                }
            }
        }
    }

    component ActionButton: Button {
        property string label: ""
        property color accentColor: root.accent

        text: label
        implicitHeight: 42

        contentItem: Text {
            text: parent.text
            color: parent.enabled ? root.textPrimary : "#667284"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            font.family: root.uiFont
            font.pixelSize: 13
            font.bold: true
        }

        background: Rectangle {
            radius: 8
            color: parent.enabled ? (parent.down ? "#2a3a55" : "#172233") : "#101722"
            border.color: parent.enabled ? accentColor : root.border
            border.width: 1
        }
    }
}
