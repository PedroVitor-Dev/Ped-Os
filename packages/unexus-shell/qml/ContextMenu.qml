import QtQuick 2.15

Item {
    id: contextMenu
    visible: false
    z: 150

    property int menuX: 0
    property int menuY: 0

    signal openSettingsRequested()

    function show(x, y) {
        menuX = x
        menuY = y

        // Ajusta pra não sair da tela
        if (menuX + menuRect.width > parent.width)
            menuX = parent.width - menuRect.width - root.spaceSm
        if (menuY + menuRect.height > parent.height)
            menuY = parent.height - menuRect.height - root.spaceSm

        visible = true
        showAnim.start()
    }

    function hide() {
        hideAnim.start()
    }

    NumberAnimation {
        id: showAnim
        target: menuRect
        property: "opacity"
        from: 0.0
        to: 1.0
        duration: root.motionBase
        easing.type: Easing.OutCubic
    }

    SequentialAnimation {
        id: hideAnim
        NumberAnimation {
            target: menuRect
            property: "opacity"
            from: 1.0
            to: 0.0
            duration: root.motionQuick
        }
        ScriptAction { script: contextMenu.visible = false }
    }

    Rectangle {
        id: menuShadow
        x: menuRect.x + root.spaceXs
        y: menuRect.y + root.spaceSm
        width: menuRect.width
        height: menuRect.height
        radius: menuRect.radius
        color: root.shadowSoft
        opacity: menuRect.opacity * 0.35
        visible: menuRect.visible
    }

    Rectangle {
        id: menuRect
        x: contextMenu.menuX
        y: contextMenu.menuY
        width: 200
        height: menuColumn.height + root.spaceLg
        radius: root.radiusLg
        color: root.surfaceBase
        border.color: root.borderSubtle
        border.width: root.borderHairline
        opacity: 0.0

        Column {
            id: menuColumn
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.topMargin: root.spaceSm
            spacing: 2
            padding: root.radiusSm

            Repeater {
                model: [
                    { icon: "🖼", label: "Change Wallpaper" },
                    { icon: "⚙️", label: "Settings" },
                    { icon: "📋", label: "Paste" },
                    { icon: "🔄", label: "Refresh" },
                    { icon: "🖥", label: "Open Terminal" }
                ]

                delegate: Rectangle {
                    width: menuColumn.width - root.spaceMd
                    height: 36
                    radius: root.radiusSm
                    color: itemMouse.containsMouse ? root.surfaceHover : "transparent"

                    Behavior on color {
                        ColorAnimation { duration: root.motionQuick }
                    }

                    Row {
                        anchors.verticalCenter: parent.verticalCenter
                        anchors.left: parent.left
                        anchors.leftMargin: root.spaceMd
                        spacing: root.spaceMd

                        Text {
                            text: modelData.icon
                            font.pixelSize: 14
                            anchors.verticalCenter: parent.verticalCenter
                        }

                        Text {
                            text: root.tr(modelData.label)
                            color: root.textPrimary
                            font.pixelSize: root.textBody
                            opacity: 0.85
                            anchors.verticalCenter: parent.verticalCenter
                        }
                    }

                    MouseArea {
                        id: itemMouse
                        anchors.fill: parent
                        hoverEnabled: true
                        onClicked: {
                            if (modelData.label === "Settings")
                                contextMenu.openSettingsRequested()

                            contextMenu.hide()
                        }
                    }
                }
            }
        }
    }

    // Fechar ao clicar fora
    MouseArea {
        anchors.fill: parent
        z: -1
        acceptedButtons: Qt.LeftButton | Qt.RightButton
        onClicked: contextMenu.hide()
    }
}
