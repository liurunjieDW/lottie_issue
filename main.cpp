#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>

int main(int argc, char**argv)
{
    QGuiApplication application(argc, argv);
    QQuickView quickView;
    quickView.engine()->addImportPath("qrc:/");
    quickView.setColor(QColor(Qt::black));
    QObject::connect(&quickView, &QQuickView::statusChanged, [&]() {
        if (QQuickView::Ready == quickView.status()) {
            quickView.setGeometry(0,0,1920,720);
            quickView.show();

        } else {
            qWarning() << QStringLiteral("Critical"), QString("load ") + quickView.source().toString() + QString(" failure!");
        }
    });
    quickView.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    return application.exec();
}
