#include <iostream>

using namespace std;

void fooB(int *p, int l, const int &r)
{
    int *e = p + l;
    for (int *c = p; c != e; ++c)
        if (*c != r)
            *c = -1;
    // draw the memory diagram up to this point!
}

void fooA(int *a, int l, const int &r)
{
    int *e = a + l;
    for (int *c = a; c != e; ++c)
        if (*c == r)
            *c = 0;
    // draw the memory diagram up to this point!
}

int main()
{
    int aa[6] = {8, 35, 56, 12, 65, 87};
    fooA(aa, 6, 12);

    for (auto &i : aa)
        cout << i << " ";
    cout << endl;

    int ab[7] = {99, 8, 35, 56, 12, 65, 87};
    fooB(ab, 7, 35);

    for (auto &i : ab)
        cout << i << " ";
    cout << endl;

    return 0;
}
