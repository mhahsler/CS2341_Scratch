#ifndef INTCELL_H
#define INTCELL_H 

class IntCell
{
    // - int val
private:
    int val;

    // + read()
    // + write(int)
public:
    // Constructor
    IntCell(int val);

    int read();
    void write(int val);
};

#endif