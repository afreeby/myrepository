#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

bool primality(int n) {
  int count=0;
  if (n%2==0)
    return false;
  for (int i=1; i<=n; i++) {
    if (n%i==0)
      count++;
  }
  if (count==2)
    return true;
  else
    return false;
}

int main() {
  int how_many, count=0, possiblePrime=-1;
  cout << "How many primes would you like?" << endl;
  cin >> how_many;
  cout << "Your primes are: " << endl;

  while(count<how_many) {
    if (how_many==1) {
      cout << 2;
      count=2;
    }  
    if(primality(possiblePrime)) {
      cout << possiblePrime << endl;
      count++;
    }
    possiblePrime++;
  }
  return 0;
}
