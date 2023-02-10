#include "IntVector.h"
#include <iostream>


IntVector::IntVector(size_t theLen) {
    values = new int[theLen];
    len = theLen;
}


IntVector::IntVector(const IntVector& rhs){}
// A copy assignment operator IntVector& operator= (const IntVector& rhs);
IntVector& IntVector::operator= (const IntVector& rhs){}

// A destructor ~IntVector();
IntVector::~IntVector() {
    delete[] values;
}



int IntVector::read(size_t index) const {
    if (index < len)
        return values[index];
    else {
        std::cerr << "You tried to read from an illegal index." << std::endl;
        return 0; // ????
    }
}

void IntVector::write(size_t index, int value) {
    if (index < len)
        values[index] = value;
    else
        std::cerr << "You tried to write to an illegal index." << std::endl;
}