#ifndef SCANFORINSTRUMENTSPARAMETERINPUTVM_H
#define SCANFORINSTRUMENTSPARAMETERINPUTVM_H

#include <QObject>
#include <QtQuick>

class ScanForInstrumentsParameterInputVM : QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY (QString scanStatus READ scanStatus NOTIFY scanStatusChanged)
public:
    ScanForInstrumentsParameterInputVM();

    QString scanStatus() const;
signals:
    void scanStatusChanged(QString s);
};

#endif // SCANFORINSTRUMENTSPARAMETERINPUTVM_H
