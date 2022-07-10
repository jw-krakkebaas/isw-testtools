#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <ViewModel/scanforinstrumentsparameterinputvm.h>



int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    //qmlRegisterSingletonInstance<ScanForInstrumentsParameterInputVM>()

    qmlRegisterSingletonType<ScanForInstrumentsParameterInputVM>("InstrumentControlPanel.ViewModel", 1, 0, "ScanForInstrumentsParameterInputVM",
                                         [&](QQmlEngine *, QJSEngine *) -> QObject * {
        return new ScanForInstrumentsParameterInputVM();
    });


    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/InstrumentControlPanel/main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
