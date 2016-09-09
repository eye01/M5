#include "CKLineData.h"

CKLineData::CKLineData(QObject *parent) : QObject(parent)
{
    m_iMax=-1;
    m_iMin=99999;
    m_iOpen=-1;
    m_iClose=-1;
    m_iNums=0;
}

CKLineData* CKLineData::init()
{
    m_iMin=m_iClose;
    m_iMax=m_iClose;
    m_iOpen=m_iClose;
    m_iNums=0;
    return this;
}

void CKLineData::setNums(QString sNums)
{
    m_iNums+=sNums.toDouble();
}

void CKLineData::setTime(QString sTime)
{
    m_sTime=sTime.split(".").at(0);
}


void CKLineData::setCost(QString sCost)
{
    float iCurrent=sCost.toFloat();


    if(iCurrent>m_iMax)
        m_iMax=iCurrent;

    if(iCurrent<m_iMin)
        m_iMin=iCurrent;

    if(m_iOpen==-1)
        m_iOpen=iCurrent;

    m_iClose=iCurrent;
}


