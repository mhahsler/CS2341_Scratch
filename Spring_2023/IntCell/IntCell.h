#ifndef INTCELL_H
#define INTCELL_H

class IntCell
{
private:
    int value;

public:
    // Constructor
    IntCell(int init = 0);

    // read from it
    int read() const;

    // write to it
    void write(int newValue);
};

#endif