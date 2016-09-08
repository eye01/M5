#ifndef CDEFINE_H
#define CDEFINE_H

#define TEST_TICK 1

#include <QString>

enum MQ_TYPE
{
    //股票
    _stock=0,
    //期貨
    _taifex=1
};

namespace STOCK_TYPE
{
    //上市股票
    static QString tse="tse";
    //上櫃股票
    static QString otc="otc";
    //興櫃股票
    static QString emg="emg";
    //上市權證
    static QString tsew="tsew";
    //上櫃權證
    static QString otcw="otcw";
}

namespace TAIFEX_TYPE
{
    //股票期貨
    static QString tfe="tfe";
    //選擇權
    static QString opt="opt";

}


#endif // CDEFINE_H
