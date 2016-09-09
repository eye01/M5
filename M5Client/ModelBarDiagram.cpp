#include "ModelBarDiagram.h"

ModelBarDiagram::ModelBarDiagram(QObject *parent) : TableModel(parent)
{
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

}

void ModelBarDiagram::appendData(QString sHeadName, QVector<QVariant> list)
{
    beginResetModel();

    m_verticalHeaderData.append( sHeadName );
    m_verticalHeaderData.pop_front();
    m_rows.append(list);
    m_rows.pop_front();

    endResetModel();
}

void ModelBarDiagram::toNext()
{
    beginResetModel();

    m_verticalHeaderData.append( m_verticalHeaderData.last());
    m_verticalHeaderData.pop_front();

    QVector<QVariant> row;
    row.append(m_rows.last().at(double(0)));
    row.append(m_rows.last().at(double(0)));
    row.append(m_rows.last().at(double(0)));
    row.append(m_rows.last().at(double(0)));
    m_rows.append(row);
    m_rows.pop_front();

    endResetModel();
}

void ModelBarDiagram::reflash(QString sHeadName, QVector<QVariant> list)
{
    beginResetModel();
    m_verticalHeaderData.last()= sHeadName ;

    m_rows.last()= list;

    endResetModel();
}
