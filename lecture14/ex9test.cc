#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

class pascal_triangle{
  vector<vector<int>> data;
  void print_row(vector<int> dummy){
    for (vector<int>::iterator i = dummy.begin(); i != dummy.end(); ++i)
      cout<<*i<<" ";
    cout<<endl;
  }
public:
  pascal_triangle(int dummy){
    if (dummy > 0){
      vector<int> row;
      data.resize(dummy);
      row.resize(1);
      row.at(0) = 1;
      data.at(0) = row;
      if (data.size() > 1){
	row.resize(2);
	row.at(0) = 1; row.at(1) = 1;
	data.at(1) = row;
      }
      if (data.size() > 2){
	for (int i = 2; i < data.size(); i++){
	  row.resize(i + 1);
	  row.front() = 1;
	  for (int j = 1; j < row.size() - 1; j++)
	    row.at(j) = data.at(i - 1).at(j - 1) + data.at(i - 1).at(j);
	  row.back() = 1;
	  data.at(i) = row;	  
	}
      }
    }
  }
  ~pascal_triangle(){
    for (vector<vector<int>>::iterator i = data.begin(); i != data.end(); ++i)
      i->clear();
    data.clear();
  }
  void print_row(int dummy){
    if (dummy < data.size())
      for (vector<int>::iterator i = data.at(dummy).begin(); i != data.at(dummy).end(); ++i)
	cout<<*i<<" ";
    cout<<endl;
  }
  void print(){
    for (int i = 0; i < data.size(); i++)
      print_row(i);
  }
  int get_coeff(int dummy1, int dummy2){
    int result = 0;
    if ((dummy1 < data.size()) && (dummy2 < data.at(dummy1).size()))
      result = data.at(dummy1).at(dummy2);
    return result;
  }
  vector<int> get_row(int dummy){
    vector<int> result;
    if (dummy < data.size())
      result = data.at(dummy);
    return result;
  }
  void print_star(int dummy, int modulus){
    if (dummy < data.size())
      for (vector<int>::iterator i = data.at(dummy).begin(); i != data.at(dummy).end(); ++i)
	if(i % modulus != 0) {  //error "no operator matches these operands" but why? i should be a numerical value
	  cout<<"* ";
	}
	else {
	  cout << " " << endl;
	};
    cout<<endl;
  };
};


int main(){
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  int modulus;
  cout << "Enter a value for the modulus: ";
  cin >> modulus;
  pascal_triangle myptri(n);
  cout<< "Pascal's Triangle with Numbers: " << endl;
  for (int start = 0; start<n; start++) {
    cout <<"Row "<< (start+1) << ": ";
    myptri.print_row(start);
  }
  for (int starbegin = 1; starbegin<n; starbegin++) {
    myptri.print_star(starbegin,modulus);
  }
  return 0;
}
