#include <iostream>
#include "IntCell.h"

// Implement IntCell to store a single int and provide read and write operations.

int main() {
    // Create a IntCell
    IntCell test = IntCell(5);

    // read from it
    std::cout << test.read() << "\n"; 

    // write to it
    test.write(10);

    // read from it
    std::cout << test.read() << "\n"; 

    return 0;
}