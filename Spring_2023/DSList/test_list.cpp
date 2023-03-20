#include <iostream>
#include "DSList.h"

// write a simple singly-linked list that works with this test code.

int main()
{
    std::cout << std::boolalpha;

    DSList<int> l;

    for (size_t i = 10; i > 0; --i)
        l.push_front(i);

  
    l.print(); // print the container's contents
    std::cout << "empty: " << l.empty() << "\n";
    std::cout << "size: " << l.size() << "\n\n";

    std::cout << "first element: " << l.front() << "\n\n";

    l.pop_front();
    
    // we will implement that later...
    // l.remove(5); // remove all elements with value 5
    // std::cout << "size (after pos and remove): " << l.size() << "\n\n";

    l.print();

    return 0;
}
