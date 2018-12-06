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
  float distance_to_origin() {return sqrt(vx*vx + vy*vy); };
  float angle() {return atan(vy/vx); };
};

int main() {
  float xin, yin;
  cout << "Enter a value for x:" << endl;
  cin >> xin;
  cout << "Enter a value for y:" << endl;
  cin >> yin;
  Point p1(xin,yin);
  cout << "p1 has length" << p1.distance_to_origin() << endl;
  cout << "angle = " << p1.angle() << endl;
  return 0;
}
