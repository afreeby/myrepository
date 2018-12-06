#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

float primality() {
  int primetest;
  bool found_a_divisor;
  cout << "Choose an integer" << endl;
  cin >> primetest;
  for (int divisor=2; divisor<primetest and not found_a_divisor; divisor++) {
    if (primetest % divisor == 0) {
      found_a_divisor = true;
      cout << "Your number is not prime, it is divisible by: " << divisor << endl;
    }
  }
  if (not found_a_divisor) {
    cout << "This was prime" << endl;
  }
}

int main () {
  primality();
    return 0;
  }
