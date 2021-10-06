#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::size_t;

void reverse(vector<int>& V) {

  size_t n = V.size();

  for (size_t i = 0; i < n; i++) {

    cout << V[n-1-i] << endl;

  }

}

int main() {


  int x;
  vector<int> V;

  while (cin >> x) {


    V.push_back(x);

  }
  cout << endl;
cout << "The reverse of the numbers inputted are: " << endl;


  reverse(V);



return 0;




}