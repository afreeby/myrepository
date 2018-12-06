#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

bool primeCheck(int n)
{
  int k = 2;
  while(k <= sqrt(n) && n %k != 0)
    k++;
  return k > sqrt(n);
}
bool isPrime (unsigned int n)
{
  int k = 2;
  unsigned int limit = sqrt(n);
  if (n == 0 || n == 1) return false;
  if (n == 2) return true;
  if(n % 2 == 0) return false;
  unsigned int i;
  for(i = 3; i <= limit; i += 2)
    {
      if(n % i == 0)
	return false;
    }
  return true;
}

void checkGoldbach(int n)
{
  if( n%2 != 0) n++;
  if (n == 4)
    cout << "4=2+2"<<endl;
  int i = n;
  for(int j = 3; j<= n/2; j += 2)
    {
      if(primeCheck(j) && primeCheck(i-j))
        {
	  cout << i << "="<<j<<"+"<<(i-j)<<endl;
	  break;
        }
    }
}

int main()
{
  int n;
  cin >> n;
  checkGoldbach(n);
  return 0;
}
