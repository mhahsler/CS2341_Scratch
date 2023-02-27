#include "IntVector.h"
#include <iostream>

// Constructor
IntVector::IntVector(size_t theSize) {
    size = theSize;
    values = new int[size];
    for (std::size_t i = 0; i < size; ++i)
        values[i] = 0;
}


IntVector::IntVector(const IntVector& rhs){
   size = rhs.size;
   values = new int[size];
   for (size_t i = 0; i < size; ++i)
    values[i] = rhs.values[i];
}

    // 2. Copy Assignment Operator
IntVector& IntVector::operator= (const IntVector& rhs){
        if (this == &rhs)
            return *this; 
            
        size = rhs.size;

        // clean old data
        delete[] values;

        // allocate memory for new data
        values = new int[size];

        // copy
        for (size_t i = 0; i < size; ++i)
            values[i] = rhs.values[i];
        
        return *this;
}

    // 3. Destructor
IntVector::~IntVector(){
        delete[] values;
}


// read from it
// i needs to positive and < size!
int IntVector::read(size_t i) const {
    // if (i < 0 || i >= size) {
    if (i >= size) {
        std::cerr << "index is out of range! Returning 0." << std::endl;
        return 0;
    }

    return values[i];
}

    // write to it
void IntVector::write(size_t i, int newValue){
    //  if (i < 0 || i >= size) {
    if (i >= size) {
        std::cerr << "index is out of range! Ignoring the write." << std::endl;
        return;
    }

    values[i] = newValue;
}
