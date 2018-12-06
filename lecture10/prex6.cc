#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class primegenerator {
private:
  int how_many_primes_found,last_number_tested;
public:
  primegenerator() {};
  primegenerator(int x,int y) {
    how_many_primes_found = x; last_number_tested = y;  
  };
  
  int nextprime() {
    int i = last_number_tested;
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
	how_many_primes_found++;
	last_number_tested = i;
	return i;
      }
    }
  };
  int getx() {return how_many_primes_found;};
};

int main() {
  int nprimes;
  cout << "Enter a value for nprimes:" << endl;
  cin >> nprimes;
  primegenerator sequence(0,1);
  while (sequence.getx() < nprimes) {
    int number = sequence.nextprime();
    cout << "Number " << number << " is prime" << endl;
  }
  return 0;
}
