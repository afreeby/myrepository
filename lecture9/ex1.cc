#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

struct vector {
  double x,y;
};

float angle(vector a) {
  return atan(a.y/a.x);
}

int main() {
struct vector input1 = {0.866025,0.5};
double
  alpha = angle(input1),
  pifrac = (4.*atan(1.0))/alpha;
 cout << "Angle of (" << input1.x << "," << input1.y << ") is " << angle(input1) << ", or pi/" << pifrac << endl;
 return 0;
}
