#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int testnum;
  cout << "Enter an integer:" << endl;
  cin >> testnum;
  for (int i=0, out=0;i<10 && out==0;i++)
    for (int j=0;j<10 && out==0;j++) {
      if (i*j > testnum) {
	cout << "[" << i << "," << j << "]" << endl;
	out =1;
	break;
      }
    }
      return 0;
}

