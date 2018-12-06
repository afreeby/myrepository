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
  float distance(Point q) {return sqrt((q.vx-vx)*(q.vx-vx) + (q.vy-vy)*(q.vy-vy)); };
};

int main() {
  Point p1(1.,2.);
  Point p2(3.,4.);  
  cout << "Distance between points is: " << p1.distance(p2) << endl;
  return 0;
}
