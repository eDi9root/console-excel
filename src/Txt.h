#ifndef TXT_H
#define TXT_H

#include "Table.h"
#include <string>

using std::string;

namespace Consolexcel {
class Txt: public Table {

    string rep_char(int n, char c);

    // A, B, ..., Z, AA, AB
    string num_to_str_col(int n);

  public:
    Txt(int row, int col);

    string print_table();
};
}

#endif
