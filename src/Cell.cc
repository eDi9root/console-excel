#include "Cell.h"

string Cell::stringfy() {
    return data;
}

int Cell::to_numeric() {
    return 0;
}

Cell::Cell(string data, int x, int y, Table* table): data(data), x(x), y(y), table(table) {}

