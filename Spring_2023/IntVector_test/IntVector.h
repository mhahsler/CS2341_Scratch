#ifndef INTVECTOR_H
#define INTVECTOR_H

#include <cstddef>

class IntVector
{
private:
    int* values;
    size_t size;

public:
    // Default Constructor
    IntVector(size_t theSize);

    // Rule-of-3 (because of new!) 
    // 1. Copy Constructor
    IntVector(const IntVector& rhs);

    // 2. Copy Assignment Operator
    IntVector& operator= (const IntVector& rhs);

    // 3. Destructor
    ~IntVector();

    // read from it
    int read(size_t i) const;

    // write to it
    void write(size_t i, int newValue);
};

#endif