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

class Rectangle {
private:
  float vw,vh;
public:
  Rectangle(Point bl,float w,float h) {
    pbl = bl; vw = w; vh = h;
  };
  Rectangle(Point bl, Point tr) {
    pbl = bl; ptr = tr;
  };
  float area() {return width*height;};
  float width() {return tr.x-bl.x;};
  float height() {return tr.y-bl.yh;};
};

int main() {
  Point bl(1,2);
  Point tr(3,5);
  Rectangle rec(bl,tr);
  float n = rec.area();
  cout << n << endl;
  return 0;
}
