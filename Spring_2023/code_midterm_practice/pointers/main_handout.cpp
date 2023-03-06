#include <iostream>

using namespace std;

int add(int x, int y)
{
	return x + y;
	/*Draw memory diagram at this point*/
}

int main()
{
	int x = 11;
	cout << add(x, 3) << endl;
	return 0;
}