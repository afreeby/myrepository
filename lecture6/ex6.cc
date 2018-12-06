#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int collatz;
  cout << "Enter an integer greater than zero:" << endl;
  cin >> collatz;
  do {
    if (collatz%2==0) {
    cout << collatz/2 << endl;
  } else {
    cout << 3*collatz + 1 << endl;
    }
  }
  while (collatz!=1);
  return 0;
}
