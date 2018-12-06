#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::setbase;
using std::setfill;
using std::setw;

int main() {
  cout << setbase(16) << setfill(' ');
  for (int i=0; i<16; i++) {
    for (int j=0; j<16; j++)
      cout << setw(2) << i*16+j << " ";
    cout << endl;
  }
  return 0;
}
