#include <iostream>

int inc(int x) { 
    return x + 1;
}

int main() {
  int a = 10;
  int b = inc(a);

  std::cout << b << "\n";
  
  return 0;
}