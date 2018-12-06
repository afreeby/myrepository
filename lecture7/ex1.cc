#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

float vector_length(double x,double y) {
  return sqrt(x*x + y*y);
}

int main () {
  int x;
  int y;
  cout << "Input a value for x:" << endl;
  cin >> x;
  cout << "Input a value for y:" << endl;
  cin >> y;
  cout << "The length of the vector from the origin to your point is:  " << vector_length(x,y) <<  endl;
  }