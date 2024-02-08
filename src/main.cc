
#include "Table.h"


int main() { 
    Consolexcel::Txt table(5, 5);
    std::ofstream out("test.txt");

    table.reg_cell(new Cell("Hello~", 0, 0, &table), 0, 0);
    table.reg_cell(new Cell("C++", 0, 1, &table), 0, 1);

    std::cout << std:: endl << table;
    out << table;
    
}
