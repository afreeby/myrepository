#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int innum;
  cout << "Enter an integer between 1 and 26" << endl;
  cin >> innum;
  char astart = 'a';
  int outnum = astart-1 + innum;
  char out = outnum;
  cout << "The corresponding letter is: " << out << endl;

  int incap;
  cout << "Enter an integer between -26 and -1" << endl;
  cin >> incap;
  char Astart = 'A';
  int outnumcap = Astart-1 + abs(incap);
  char outcap = outnumcap;
  cout << "The corresponding letter is: " << outcap << endl;
  return 0;
}
//can make code more efficient (look at piazza/photo)
