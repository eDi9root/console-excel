#include "Table.h"

namespace Consolexcel {
Table::Table(int max_row, int max_col) : max_row(max_row), max_col(max_col) {
    data_table = new Cell**[max_row];
    for (int i = 0; i < max_row; i++) {
        data_table[i] = new Cell*[max_col];
        for (int j = 0; j < max_col; j++) {
            data_table[i][j] = NULL;
        }
    }
}

void Table::reg_cell(Cell* c, int row, int col) {
    if (!(row < max_row && col < max_col)) return;

    if (data_table[row][col]) {
        delete data_table[row][col];
    }
    data_table[row][col] = c;
}

int Table::to_numeric(const string& s) {
    int row = s[0] - 'A';
    int col = atoi(s.c_str() + 1) - 1;

    if (row < max_row && col < max_col) {
        if (data_table[row][col]) {
            return data_table[row][col]->to_numeric();
        }
    }
    return 0;
}

int Table::to_numeric(int row, int col) {
    if (row < max_row && col < max_col && data_table[row][col]) {
        return data_table[row][col]->to_numeric();
    }
    return 0;
}

string Table::stringify(const string& s) {
    int row = s[0] - 'A';
    int col = atoi(s.c_str() + 1) - 1;

    if (row < max_row && col < max_col) {
        if (data_table[row][col]) {
            return data_table[row][col]->stringify();
        }
    }
    return "";
}

string Table::stringify(int row, int col) {
    if (row < max_row && col < max_col && data_table[row][col]) {
        return data_table[row][col]->stringify();
    }
    return "";
}

std::ostream& operator<<(std::ostream& o, Table& table) {
    o << table.print_table();
    return o;
}

Table::~Table() {
    for (int i = 0; i < max_row; i++) {
        for (int j = 0; j < max_col; j++) {
            if (data_table[i][j]) {
                delete data_table[i][j];
            }
        }
    }
    for (int i = 0; i < max_row; i++) {
        delete[] data_table[i];
    }
    delete[] data_table;
}
}
