#include "IntCell.h"

IntCell::IntCell(int theVal) {
  val = theVal;  
}



int IntCell::read() {
    return val;
}

void IntCell::write(int theVal) {
    val = theVal;
}
