#include "IntCell.h"

// Constructor
IntCell::IntCell(int init) {
   value = init;
}

// read from it
int IntCell::read() const {
    return value;
}

    // write to it
void IntCell::write(int newValue){
    value = newValue;
}
