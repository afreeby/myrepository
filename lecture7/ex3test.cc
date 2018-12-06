#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

float primality(int N) {
  int number_of_primes_found=0, starting_point_with_longest_length=-1;
  int primetest, divisor;
  int current_length=1;
  int current = primetest;
  bool found_a_divisor;
  for (primetest=0;primetest<1000;primetest++) {
    for (divisor=2;divisor<=primetest and not found_a_divisor;divisor++) {
      while (current_length <= N) {
	if (current%divisor==0) {
	  found_a_divisor = true;
	  cout << "something" << endl;
	  current = current++;
	}
      }
    }
    if (not found_a_divisor) {
      cout << current << " is prime." << endl;
      current = current++;
      current_length++;
    }
    if (current_length>number_of_primes_found) {
      starting_point_with_longest_length = primetest;
      number_of_primes_found = current_length;
    }
  }
  return 0;
}

int main () {
  int how_many;
  cout << "How many primes do you want me to print?" << endl;
  cin >> how_many;
  primality(how_many);
  return 0;
}
  
