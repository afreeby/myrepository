#include <iostream>
using std::cin;
using std::cout;
using std::endl;

struct primesequence{
  int number_of_primes_found;
  int last_number_tested;
};

int nextprime(struct primesequence &sequence) {
  int i = sequence.last_number_tested;
  while (true) {
    i++;
    bool found_a_prime = true;
    
    for (int j=2;j<i;j++) {
      if(i%j==0) {
	found_a_prime = false;
	break;
      }
    }
    
    if (found_a_prime) {
      sequence.number_of_primes_found++;
      sequence.last_number_tested = i;
      return i;
    }
  }
}

int main() {
  int nprimes;
  cout << "Enter a value for nprimes:" << endl;
  cin >> nprimes;
  struct primesequence sequence;
  sequence.number_of_primes_found = 0;
  sequence.last_number_tested = 1;
  while (sequence.number_of_primes_found < nprimes) {
    int number = nextprime(sequence);
    cout << "Number " << number << " is prime" << endl;
  }
  return 0;
}
