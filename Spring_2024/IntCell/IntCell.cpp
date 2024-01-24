#include "IntCell.h"

IntCell::IntCell(int theValue) : val{theValue} 
{}

int IntCell::read() const {
    return val;
}


void IntCell::write(int theValue) {
   val = theValue;
}
