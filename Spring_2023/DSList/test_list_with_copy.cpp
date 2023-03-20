#include <iostream>
#include "DSList.h"

// use the copy constructor and the copy assignment operator

int main()
{
    std::cout << std::boolalpha;

    DSList<int> l;

    for (size_t i = 10; i > 0; --i)
        l.push_front(i);

    // make a copy of the list (calls copy constructor)
    DSList<int> l2(l);
    
    std::cout << "l:  ";
    l.print(); 
    std::cout << "l2: ";
    l2.print(); 

    l.pop_front();
    
    std::cout << "l:  ";
    l.print(); 
    std::cout << "l2: ";
    l2.print(); 
   
    // use copy assignment operator
    DSList<int> l3;
    l3 = l;

    return 0;
}
