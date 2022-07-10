#ifndef ALLNETWORKADAPTERSMODEL_H
#define ALLNETWORKADAPTERSMODEL_H

#include <QAbstractListModel>

class AllNetworkAdaptersModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit AllNetworkAdaptersModel(QObject *parent = nullptr);

    enum{
        NetAdapteripAddressRole = Qt::UserRole
    };

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    virtual QHash<int,QByteArray> roleNames() const override;

private:
};

#endif // ALLNETWORKADAPTERSMODEL_H
