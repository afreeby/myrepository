#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void change (int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main () {
  int i=2, j=3;
  change(i,j);
  cout << "i = " << i << ", j = " << j << endl;
  return 0;
}
