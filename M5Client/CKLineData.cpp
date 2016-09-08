#include "CKLineData.h"

CKLineData::CKLineData(QObject *parent) : QObject(parent)
{
    init();
}

void CKLineData::init()
{
    m_iMax=-1;
    m_iMin=99999;
    m_iOpen=-1;
    m_iClose=-1;
}

void CKLineData::appedn(QString sCost)
{
    int iCurrent=sCost.toFloat();
    if(iCurrent>m_iMax)
        m_iMax=iCurrent;

    if(iCurrent<m_iMin)
        m_iMin=iCurrent;

    if(m_iOpen==-1)
        m_iOpen=iCurrent;

    m_iClose=iCurrent;
}
