#ifndef TABLE_H
#define TABLE_H

#include <string>

using std::string;

class Cell;

namespace Consolexcel {
class Table {
  protected:
    int max_row, max_col;

    // two-dimensional array contained Cell*
    Cell*** data_table;
  
  public:
    Table(int max_row, int max_col);

    // Register a new cell in the row row col column.
    void reg_cell(Cell* c, int row, int col);

    // Return numeric data of cell
    // s : name of cell, (A3, B6)
    int to_numeric(const string& s);

    // Call cells by row and column numbers.
    int to_numeric(int row, int col);

    // Return string of cell
    string stringify(const string& s);

    string stringify(int row, int col);

    virtual string print_table() = 0;

    ~Table();
};
}

#endif
