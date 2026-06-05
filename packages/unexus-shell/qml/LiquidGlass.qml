import QtQuick 2.15

Item {
    id: glass

    default property alias content: contentLayer.data

    property int radius: 12
    property color tintColor: "#0e1520"
    property color accentColor: "#4d9eff"
    property color borderColor: accentColor
    property real materialOpacity: 0.72
    property real borderOpacity: 0.52
    property real highlightOpacity: 0.18
    property real depth: 0.36
    property bool animated: true

    clip: false

    Behavior on materialOpacity {
        enabled: glass.animated
        NumberAnimation { duration: root.motionBase; easing.type: Easing.OutCubic }
    }

    Behavior on borderOpacity {
        enabled: glass.animated
        NumberAnimation { duration: root.motionBase; easing.type: Easing.OutCubic }
    }

    Rectangle {
        x: root.spaceXs
        y: root.spaceSm
        width: parent.width
        height: parent.height
        radius: glass.radius
        color: root.shadowSoft
        opacity: glass.depth
    }

    Rectangle {
        id: material
        anchors.fill: parent
        radius: glass.radius
        color: glass.tintColor
        opacity: glass.materialOpacity
        border.color: glass.borderColor
        border.width: root.borderHairline
    }

    Rectangle {
        anchors.fill: parent
        radius: glass.radius
        opacity: glass.highlightOpacity
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#88ffffff" }
            GradientStop { position: 0.34; color: "#22ffffff" }
            GradientStop { position: 1.0; color: "#00000000" }
        }
    }

    Canvas {
        id: refractionCanvas
        anchors.fill: parent
        opacity: 0.24
        antialiasing: true

        onWidthChanged: requestPaint()
        onHeightChanged: requestPaint()
        onPaint: {
            var ctx = getContext("2d")
            ctx.clearRect(0, 0, width, height)
            ctx.lineWidth = 1
            ctx.globalAlpha = 0.22
            ctx.strokeStyle = glass.accentColor

            for (var i = 0; i < 5; i++) {
                var y = height * (0.18 + i * 0.16)
                ctx.beginPath()
                ctx.moveTo(width * 0.08, y)
                ctx.bezierCurveTo(width * 0.28, y - 10, width * 0.62, y + 14, width * 0.92, y - 3)
                ctx.stroke()
            }

            ctx.globalAlpha = 1.0
        }

        Connections {
            target: glass
            function onAccentColorChanged() { refractionCanvas.requestPaint() }
        }
    }

    Canvas {
        id: grainCanvas
        anchors.fill: parent
        opacity: 0.08

        onWidthChanged: requestPaint()
        onHeightChanged: requestPaint()
        onPaint: {
            var ctx = getContext("2d")
            ctx.clearRect(0, 0, width, height)
            ctx.fillStyle = "#ffffff"

            for (var i = 0; i < Math.max(36, width * height / 900); i++) {
                ctx.globalAlpha = Math.random() * 0.22
                ctx.fillRect(Math.random() * width, Math.random() * height, 1, 1)
            }

            ctx.globalAlpha = 1.0
        }
    }

    Rectangle {
        anchors.fill: parent
        radius: glass.radius
        color: "transparent"
        border.color: glass.borderColor
        border.width: root.borderHairline
        opacity: glass.borderOpacity
    }

    Rectangle {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: root.borderHairline
        height: Math.max(1, root.borderHairline)
        radius: glass.radius
        color: "#ffffff"
        opacity: 0.22
    }

    Item {
        id: contentLayer
        anchors.fill: parent
    }
}
