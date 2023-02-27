#ifndef INTVECTOR_H
#define INTVECTOR_H

#include <cstddef>


class IntVector {

private:
int* values; // !!! needs a new
size_t len;

public:

// Constructor
IntVector(size_t len = 0);

// A copy constructor IntVector(const IntVector& rhs);
IntVector(const IntVector& rhs);
// A copy assignment operator IntVector& operator= (const IntVector& rhs);
IntVector& operator= (const IntVector& rhs);
// A destructor ~IntVector();
~IntVector();

int read(size_t index) const;
void write(size_t index, int value);

bool operator==(IntVector const & rhs ) const;
int & operator[]( size_t pos );

};


#endif