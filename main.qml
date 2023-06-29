import QtQuick 2.15
import org.kde.lottie 1.0 as Lottie
Item {
    id:root
    anchors.fill: parent
    visible: true
    width: 1920
    height: 720

    Lottie.LottieAnimation {
            id: lottieAnim
            x:root.x + root.width * (1.0/2.0 - 0.14583333/2.0)
            y:root.y + root.height * 0.64415278
            width: root.width * 0.14583333
            height: root.height * 0.205555556
            source: Qt.resolvedUrl("qrc:/data.json")
            running: true
            clearBeforeRendering:  true
            speed: 1
            loops: Animation.Infinite
            reverse: false
            scale: 1.0
        }

}
