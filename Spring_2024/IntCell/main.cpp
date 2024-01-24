#include <iostream>
#include "IntCell.h"

int main() {
    // test code
    IntCell test = IntCell{5};

    std::cout << test.read() << "\n";
    if (test.read() != 5) {
        std::cerr << "Problem (init)!!!!\n";
        return 1;
    }

    test.write(12);
    std::cout << test.read() << "\n";
    if (test.read() != 12) {
        std::cerr << "Problem (write)!!!!\n";
        return 2;
    }
    
    IntCell cell2 = IntCell();
     std::cout << cell2.read() << "\n";

    return 0;
}