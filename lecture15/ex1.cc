#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;
#include <memory>
using std::shared_ptr;
using std::make_shared;

class Node {
private:
  int datavalue{0};
  shared_ptr<Node> tail_ptr{nullptr};
public:
  Node() {}
  Node(int value) { datavalue = value; };
  void set_tail( shared_ptr<Node> tail ) {
    tail_ptr = tail; };
  void print() {
    cout << datavalue;
    if (has_next()) {
      cout << ", "; tail_ptr->print();
    };
  };
  //  void append(make_shared<Node>) {
  //make_shared.push_back(3);
  // };
};  

int main() {
  auto
    first = make_shared<Node>(23),
    second = make_shared<Node>(45),
    third = make_shared<Node>(32);
  first->append(second);
  first->append(third);
  first->print();
  return 0;
}