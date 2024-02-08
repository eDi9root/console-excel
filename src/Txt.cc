#include "Txt.h"

namespace Consolexcel {
Txt::Txt(int row, int col) : Table(row, col) {}

string Txt::print_table() {
    string total;

    int* col_max_wide = new int[max_col];
    for (int i = 0; i < max_col; i++) {
        unsigned int max_wide = 2;
        for (int j = 0; j < max_row; j++) {
            if (data_table[j][i] && data_table[j][i]->stringify().length() > max_wide) {
                max_wide = data_table[j][i]->stringify().length();
            }
        }
        col_max_wide[i] = max_wide;
    }
    return total;
}
}
