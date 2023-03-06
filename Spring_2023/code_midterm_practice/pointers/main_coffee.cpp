#include <iostream>

using namespace std;

int main()
{
    // this is an array of 5 cstrings of length 10
    char coffee[5][10] = {"french", "espresso", "sumatra", "colombian", "water"};
    
    // this is how one would print out the array using a C++11 range-based for loop
    for (const auto &i : coffee)
        cout << i << endl;
    cout << endl;    

    // first star gets a cstring, second star gets a char
    cout << coffee[1] << endl;
    cout << *(*coffee + 1) << endl;
    cout << *(*(coffee + 2) + 3) << endl;
    cout << *(coffee + 4) << endl;
    cout << **coffee + 1 << endl;
    cout << endl; 

    // ASCII table: http://www.asciitable.com/
    cout << (int)'f' << endl;
    cout << (char)('f' + 1) << endl;
    cout << endl; 

    // possible indexing because of memory layout
    cout << *coffee + 10 << endl;
    cout << *coffee + 3 * 10 << endl;
    cout << endl; 

    // this is how it is allocated in memory
    for (int i = 0; i < 5 * 10; ++i)
        if (*(*coffee + i) == '\0')
            cout << "0";
        else
            cout << *(*coffee + i);
    cout << endl;

    return 0;
}
