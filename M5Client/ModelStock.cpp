#include "ModelStock.h"
#include <QDebug>
ModelStock::ModelStock(QObject *parent) : TableModel(parent)
{

    beginResetModel();

    QVector<QVariant> list;

    list.append(double(0));
    list.append(double(0));
    list.append(double(0));
    list.append(double(0));

    for(int i=0;i<60;i++)
    {

    m_verticalHeaderData.append( " " );
    m_rows.append(list);
    }


    endResetModel();




}

void ModelStock::appendData(QString sHeadName,QVector<QVariant> list)
{
    beginResetModel();

    m_verticalHeaderData.append( sHeadName );
    m_verticalHeaderData.pop_front();
    m_rows.append(list);
    m_rows.pop_front();

    endResetModel();
}

void ModelStock::toNext()
{
    beginResetModel();

    m_verticalHeaderData.append( m_verticalHeaderData.last());
    m_verticalHeaderData.pop_front();

    QVector<QVariant> row;
    row.append(m_rows.last().at(VALUE_OBJ_STOCK::_close));
    row.append(m_rows.last().at(VALUE_OBJ_STOCK::_close));
    row.append(m_rows.last().at(VALUE_OBJ_STOCK::_close));
    row.append(m_rows.last().at(VALUE_OBJ_STOCK::_close));
    m_rows.append(row);
    m_rows.pop_front();

    endResetModel();
}

void ModelStock::reflash(QString sHeadName, QVector<QVariant> list)
{
    beginResetModel();
    list[VALUE_OBJ_STOCK::_open]=m_rows.last().at(VALUE_OBJ_STOCK::_open);
    m_verticalHeaderData.last()= sHeadName ;
    m_rows.last()= list;

    endResetModel();
}
