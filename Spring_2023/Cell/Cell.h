#ifndef INTCELL_H
#define INTCELL_H

template <typename Object>
class Cell
{
private:
    Object value;

public:
    // Constructor
    Cell(const Object& init) {
      value = init;
    }

    // read from it
    Object read() const {
      return value;
    }

    // write to it
    void write(const Object& newValue){
      value = newValue;
    }
};

#endif
