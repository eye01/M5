﻿#ifndef CSQL_H
#define CSQL_H

#include <QThread>
#include <QtSql/QtSql>


class CSql : public QThread
{

    Q_OBJECT

public:

    CSql(QObject *parent = 0);

    ~CSql(){m_db.close();}

    QSqlDatabase m_db;

    static CSql& Instance()
    {
        if(m_pInstance==0)
            m_pInstance=new CSql();
        return *m_pInstance;
    }

    void run(){}

    bool openDb(QString sDbName,  QString sUser, QString sPassword,QString sIp, QString sPort="3306",QString sSqldriver="QSQLITE");

    void closeDB(){if(m_db.isOpen())m_db.close();}

    QList<QVariantList> getTable(QString sTableName);

    int insertDb(QString sTableName,QMap<QString,QString> list);

signals:
    void signalLog(QString sLog);

private:


    static CSql* m_pInstance;
};

#endif // CSQL_H
