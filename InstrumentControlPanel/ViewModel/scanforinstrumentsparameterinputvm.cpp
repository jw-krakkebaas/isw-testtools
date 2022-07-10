#include "scanforinstrumentsparameterinputvm.h"

ScanForInstrumentsParameterInputVM::ScanForInstrumentsParameterInputVM(QObject* paren)
{

}

void ScanForInstrumentsParameterInputVM::loadConfiguration()
{
   auto allAddresses = QNetworkInterface::allAddresses();

   for(const QHostAddress adr : allAddresses)
   {
       if(adr.protocol() == QAbstractSocket::IPv4Protocol)
       {
        qDebug()  << adr.toString();
       }
   }
}

QString ScanForInstrumentsParameterInputVM::scanStatus() const
{
    return QString("Scan has not started");
}

AllNetworkAdaptersModel* ScanForInstrumentsParameterInputVM::allNetAdapters()
{
    return _allNetAdaptersModel;
}
