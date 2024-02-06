#ifndef CELL_H
#define CELL_H

class Cell {
  protected:
    int x, y;
    Table* table;
    string data;

  public:
    virtual string stringfy();
    virtual int to_numeric();

    Cell(string data, int x, int y, Table* table);
};

#endif
