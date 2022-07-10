#include "allnetworkadaptersmodel.h"

AllNetworkAdaptersModel::AllNetworkAdaptersModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

int AllNetworkAdaptersModel::rowCount(const QModelIndex &parent) const
{
    // For list models only the root node (an invalid parent) should return the list's size. For all
    // other (valid) parents, rowCount() should return 0 so that it does not become a tree model.
    if (parent.isValid())
        return 0;

    // FIXME: Implement me!
    return 1;
}

QVariant AllNetworkAdaptersModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    switch(role)
    {
        case NetAdapteripAddressRole:
        {
            QString dbg = QString("Adapter ") + QString::number(index.row());
            qDebug() << dbg;
            return QVariant(dbg);
        }
    }

    return QVariant();
}

QHash<int, QByteArray> AllNetworkAdaptersModel::roleNames() const
{
    QHash<int, QByteArray> names;

    names[NetAdapteripAddressRole] = "NetAdapter";

    return names;
}
