#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setbase;
using std::setfill;
using std::setw;
using std::setprecision;

int main() {
  cout << setw(7) << 1.345 << endl;
  cout << setw(7) << 23.789 << endl;
  cout << setw(7) << setprecision(7) << 456.1234 << endl;
  return 0;
}
