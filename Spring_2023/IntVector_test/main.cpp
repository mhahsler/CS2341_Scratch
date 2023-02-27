#include <iostream>
#include "IntVector.h"
#include <cstddef>

// Implement IntCell to store a single int and provide read and write operations.

int main()
{
    // Create a IntVector (with length)
    IntVector test = IntVector(5);

    // read from it
    for (size_t i = 0; i < 5; ++i)
    {
        std::cout << test.read(i) << " ";
    }
    std::cout << "\n";

    // write 99
    test.write(2, 99);
    test.write(10000000, 99);

    // read from it
    for (size_t i = 0; i < 10; ++i)
    {
        std::cout << test.read(i) << " ";
    }
    std::cout << "\n";

    return 0;
}