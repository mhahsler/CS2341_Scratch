#include <iostream>
#include "IntVector.h"
#include <cstddef>   // for size_t

// Implement IntVector to store a sequence of integers
// * the sequence length is fixed at construction time
// * provide read and write operations (using the first argument as the 0-based index). 

int main()
{
    // Create a IntVector (with length)
    IntVector test = IntVector(5);

    // read from it
    for (size_t i = 0; i < 5; ++i)
        std::cout << test.read(i) << " ";
    
    std::cout << "\n";

    // write 99 in position 3 (index 2)
    test.write(2, 99);

    // these should not work!!!
    test.write(10000000, 99);
    test.write(-1, 99);

    // print the whole sequence
    for (size_t i = 0; i < 10; ++i)
        std::cout << test.read(i) << " ";
    
    std::cout << "\n";

    return 0;
}