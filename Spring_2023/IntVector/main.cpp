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
    std::cout << "test: ";
    for (size_t i = 0; i < 10; ++i)
        std::cout << test.read(i) << " ";
    
    std::cout << "\n";

    // Copy
    std::cout << "copy: ";
    IntVector copy(test);
     for (size_t i = 0; i < 10; ++i)
        std::cout << copy.read(i) << " ";
    
    std::cout << "\n";

    IntVector copy2(100);
    copy2 = test;

    std::cout << "copy2: ";
     for (size_t i = 0; i < 10; ++i)
        std::cout << copy2.read(i) << " ";

    // operator==
    if (copy == copy2) 
        std::cout << "copy is identical to copy 2" << "\n";

    // operator[]=
    std::cout << copy[2] << "\n"; 
    int v = copy[2];
    v++;

    std::cout << copy[2] << "\n";
    
    return 0;
}