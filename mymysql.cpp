#include "mymysql.h"

myMySQL::myMySQL()
{
    QSqlDatabase connect = QSqlDatabase::addDatabase("QMYSQL");
    connect.setHostName(SQLHost);
    connect.setPort(3306);

}
