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
     qDebug()<<"append OHLC : "<<list;
    endResetModel();
}

void ModelStock::reflash(QString sHeadName, QVector<QVariant> list)
{
    beginResetModel();
    if(m_rows.last().at(VALUE_OBJ_STOCK::_open)>0)
        list[VALUE_OBJ_STOCK::_open]=m_rows.last().at(VALUE_OBJ_STOCK::_open);
    m_verticalHeaderData.last()= sHeadName ;
    m_rows.last()= list;
    qDebug()<<"Re OHLC : "<<list;
    endResetModel();
}
