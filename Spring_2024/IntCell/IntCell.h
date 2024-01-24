#ifndef INTCELL_H
#define INTCELL_H

class IntCell
{

private:
    int val;

public:
    IntCell(int theValue = 0);

    int read() const;
    void write(int);
};

#endif