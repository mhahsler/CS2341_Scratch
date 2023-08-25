#include <iostream>
#include "IntCell.h"

int main () {
    IntCell test = IntCell{5};

    std::cout << test.read() << std::endl;
    if (test.read() != 5) {
     std::cerr << "Oh no! It is not 5." << std::endl;
    }



    return 0;
}