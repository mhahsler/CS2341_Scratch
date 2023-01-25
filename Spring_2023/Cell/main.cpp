#include <iostream>
#include "Cell.h"

// Implement Cell to store a single int and provide read and write operations.

int main() {
    // Create a Cell
    Cell<int> test = Cell(5);
    Cell<char> testDouble = Cell('a');

    // read from it
    std::cout << test.read() << "\n"; 
    std::cout << testDouble.read() << "\n";

    // write to it
    test.write(10);
    testDouble.write('b');

    // read from it
    std::cout << test.read() << "\n"; 
    std::cout << testDouble.read() << "\n";

    return 0;
}