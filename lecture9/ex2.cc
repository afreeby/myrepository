#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

struct vector {
  double x,y;
};

void swap(vector &a) {
  float temp = a.x;
  a.x = a.y;
  a.y = temp;
}

int main() {
  struct vector input1 {2.5,3.5};
  swap(input1);
  cout << input1.x << "," << input1.y << endl;
  return 0;
}
