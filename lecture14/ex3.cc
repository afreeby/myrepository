#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>
#include <vector>
using std::vector;

int main() {
  vector<float> x = {1.,4.,2.,6.,5.};
  int xsum = x.at(0)+x.at(1)+x.at(2)+x.at(3)+x.at(4);
  for ( float &n : x ) {
    n = n/(xsum);
    cout << n << endl;
  }
  float xsquaresum;
  xsquaresum = x.at(0)+x.at(1)+x.at(2)+x.at(3)+x.at(4);
  cout << "sum is: " << xsquaresum << endl;
  return 0;
}
