#include <iostream> 
#include "sqlite3.h"

#define DATABASE "database.db"

class DbTools {
    private:
        sqlite3 *db;
        int dbConnection;
        std::string sql;

    public:
        void initTable() {
            sql = "CREATE TABLE COMPANY("  \
            "ID INT PRIMARY KEY NOT NULL," \
            "USERNAME   TEXT    NOT NULL," \
            "PASSWORD   TEXT  NOT NULL," \
            "SALT   TEXT    NOT NULL," \
            "FIRSTNAME  TEXT    NOT NULL," \
            "LASTNAME   TEXT    NOT NULL," \
            "HOURS  INT 0," \
            "CLOCK_IN_TIME  TEXT," \
            "CLOCK_OUT_TIME TEXT);";

        }

};