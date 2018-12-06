#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum_of_squares(int n) {
  if (n==1) {
    return 1;
  }
  else { 
    return n*n + sum_of_squares(n-1);
  }
}

int main () {
  int innum;
  cout << "Enter a number into the function:" << endl;
  cin >> innum;
  sum_of_squares(innum);
  cout << sum_of_squares << endl;
  return 0;
}
