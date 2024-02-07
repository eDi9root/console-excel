#ifndef TABLE_H
#define TABLE_H

#include <string>

using std::string;

class Cell;

class Table {
  protected:
    int max_row, max_col;

    Cell*** data_table;
};



#endif
