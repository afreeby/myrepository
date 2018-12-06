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
      i++;  
    }
  };
  int getx() {return how_many_primes_found;};
};

int primetest(int q) {
  bool found_a_divisor;
  for (int divisor=2; divisor<q and not found_a_divisor; divisor++) {
    if (q % divisor == 0) {
      found_a_divisor = true;
    }
  }
  if (not found_a_divisor) {
    return q;
  }
};

int main() {
  int upperbound;
  cout << "Enter a value for upperbound:" << endl;
  cin >> upperbound;
  for (int p=2;p<1000;p++) {
    primegenerator sequence(0,p);
    while (p < 1000) {
      int p = sequence.nextprime();
      for (int e=4;e>p;e+=2) {
	primegenerator sequence(0,2);
	while (true) {
	  int q = sequence.nextprime();
	  int difference = e - q;
	  cout << e << " = " << q << " + " << difference << endl;
	  break;	 	
	}break;
      }break;
    }break;
  }
  return 0;
}

//only returns the first even 4 = 2 + 2
