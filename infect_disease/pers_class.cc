#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Person {
private:
  int status;
public:
  Person(int disease_status) {
    status = disease_status;
  };
  Person() {};

  void set_infect() {status = 5; };
  int status_string() {
    if (status == 0)
      cout << "susceptible" << endl;
    else if (status == -1)
      cout << "recovered" << endl;
    else if (status == -2)
      cout << "insusceptible" << endl;
    else
      cout << "sick (" << status << " days to go)" << endl;
    ;};
  void update() {
    if (status <= 5 && status > 1)
      status--;
    else if (status == 1)
      status-=2;
; };
  void infect(Person n) {n.set_infect(); }; //should it be void? should the variable be n?
  bool is_stable() {
    if (status < -1) //is this the correct value?
      return true;
    else
      return false;
  };
};

int main() {
  //I don't think all this stuff will actually go here
  //just a test for now
  //"Should execute these statements in a loop"
  
  Person joe;
  Person n;
  joe.update();
  float bad_luck = (float) rand()/(float)RAND_MAX;//don't know what this does
  if (bad_luck > .95)
    joe.infect(5);
  
  cout << "On day " << step << ", Joe is " << joe.status_string() << endl;
  //if (joe.is_stable())
  //  break;
  //what does step do?
  
  return 0;
}
