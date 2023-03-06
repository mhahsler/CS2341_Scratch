#include <iostream>

using namespace std;

void print_digits(int x)
{
    // check base case
    if (x <= 0)
        return;

    // get digit to print (remainder of integer division by 10)
    int digit = x % 10;

    // call recursion with x divided by 10 (integer division)
    print_digits(x / 10);

    cout << digit << endl;
}

int main()
{
    print_digits(8749);
}
