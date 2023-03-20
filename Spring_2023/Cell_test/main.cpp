#include <iostream>
#include <string>
#include "Cell.h"

// Implement IntCell to store a single int and provide read and write operations.

int main() {
    // Create a Cell
    Cell<std::string> test = Cell(std::string("Hello!"));

    // read from it
    std::cout << test.read() << "\n"; 

    // write to it
    test.write("Good Bye!");

    // read from it
    std::cout << test.read() << "\n"; 

    return 0;
}