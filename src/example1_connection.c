#include <stdio.h>
#include <sqlite3.h>

int main(int argc, char* argv[]) {
    sqlite3 *db;
    int rc;
    
    rc = sqlite3_open("students.db", &db);
    
    if (rc) {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return 0;
    } else {
        fprintf(stdout, "Opened database successfully\n");
    }
    
    sqlite3_close(db);
    return 0;
}


