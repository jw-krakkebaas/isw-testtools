#ifndef SCANFORINSTRUMENTSPARAMETERINPUTVM_H
#define SCANFORINSTRUMENTSPARAMETERINPUTVM_H

#include <QObject>
#include <QtQuick>

#include <Model/allnetworkadaptersmodel.h>

class ScanForInstrumentsParameterInputVM : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY (QString scanStatus READ scanStatus NOTIFY scanStatusChanged)
    Q_PROPERTY (AllNetworkAdaptersModel* allNetAdapters READ allNetAdapters NOTIFY allNetAdaptersChanged)
public:
    ScanForInstrumentsParameterInputVM(QObject* parent = NULL);

    Q_INVOKABLE void loadConfiguration();

    QString scanStatus() const;
    AllNetworkAdaptersModel* allNetAdapters();
signals:
    void scanStatusChanged(QString s);
    void allNetAdaptersChanged();
private:
    AllNetworkAdaptersModel* _allNetAdaptersModel = new AllNetworkAdaptersModel() ;
};

#endif // SCANFORINSTRUMENTSPARAMETERINPUTVM_H
