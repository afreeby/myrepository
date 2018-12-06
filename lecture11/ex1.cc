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
  Point bl;
  Point tr;
public:
  Rectangle(Point bl,float w,float h) {
    bl = bl; vw = w; vh = h;
  };
  Rectangle(Point bl, Point tr) {
    bl = bl; tr = tr;
  };
  float area() {return width()*height();};
  float width() {return tr.getx()-bl.getx();};
  float height() {return tr.gety()-bl.gety();};
};

class Square : public Rectangle {
public:
  int area() {return width*height;};
};

int main() {
  Point bl(1.,2.),tr(3.,5.);
  Rectangle a;

  cout << a.height() << endl;
  cout << a.width() << endl;
  cout << a.area() << endl; 
return 0;
}
