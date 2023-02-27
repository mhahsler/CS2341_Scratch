#include "IntVector.h"
#include <iostream>


IntVector::IntVector(size_t theLen) {
    values = new int[theLen];
    len = theLen;
}

// A copy constructor IntVector(const IntVector& rhs);
IntVector::IntVector(const IntVector& rhs){
    len = rhs.len;
    values = new int[len]; 
    for (size_t i = 0; i < len; ++i) 
        values[i] = rhs.values[i];
}
// A copy assignment operator IntVector& operator= (const IntVector& rhs);
IntVector& IntVector::operator= (const IntVector& rhs){
    // delete old data
    delete[] values;

    // create and copy
    len = rhs.len;
    values = new int[len]; 
    for (size_t i = 0; i < len; ++i) 
        values[i] = rhs.values[i];

    return *this;
}

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

bool IntVector::operator==(IntVector const & rhs ) const {
    // this will also make sure that the for loop does not produce a
    // memory issues if rhs.len < len
    if (len != rhs.len)
        return false;

    for (size_t i = 0; i < len; ++i) {
        if (values[i] != rhs.values[i])
            return false;
    }

    return true;
}

int & IntVector::operator[]( size_t pos ) {
    return values[pos];
}