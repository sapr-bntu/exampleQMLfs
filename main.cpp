#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"
#include <QDirModel>
#include <QtDeclarative/QDeclarativeContext>

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QDirModel model;
    QmlApplicationViewer viewer;
    viewer.rootContext()->setContextProperty("dirModel", &model);
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer.setMainQmlFile(QLatin1String("qml/exampleQMLfs/main.qml"));
    viewer.showExpanded();

    return app->exec();
}
