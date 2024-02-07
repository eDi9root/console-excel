#ifndef CELL_H
#define CELL_H

#include <string>
using std::string;

class Cell {
  protected:
    int x, y;
    Table* table;
    string data;

  public:
   // Returns the cell value as a string
   virtual string stringfy();

   // Returns the cell value as a numeric
   virtual int to_numeric();

   Cell(string data, int x, int y, Table* table);
};

#endif
