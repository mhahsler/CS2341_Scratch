#include <iostream>

using namespace std;

int main()
{
    int r[] = {10, 20, 30, 40, 50};

    cout << r[1] << endl;
    cout << *r + 1 << endl;
    cout << *(r + 1) << endl;
    cout << *(r + 5) << endl; // memory leak!

    int *r_ptr = r;
    int **r_ptr_ptr = &r_ptr;

    cout << **r_ptr_ptr << endl;
    cout << *(*r_ptr_ptr + 1) << endl;

    return 0;
}
