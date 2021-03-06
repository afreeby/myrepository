#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class Point {
private:
  float vx,vy;
public:
  Point(float x, float y) {
    vx = x; vy = y;  
  };
    float getx() {return vx;};
    float gety() {return vy;};
};

class LinearFunction {
private:
  float slope, intercept;
public:
  LinearFunction(Point input_p1, Point input_p2) {
    slope = ((input_p1.gety()-input_p2.gety())/(input_p1.getx()-input_p2.getx()));
    intercept = 0;
  };
  float evaluate_at(float x) {return slope*x + intercept; };
};

int main() {
  Point input_p1(1.,2.);
  Point input_p2(3.,4.);
  float x;
  cout << "Enter a value for x:" << endl;
  cin >> x;
  cout << "Distance between points is: " << a.evaluate_at(x) << endl;
  return 0;
}
