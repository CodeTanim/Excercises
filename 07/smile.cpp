#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// TODO: write a function that has no return value (i.e., return
 //* type is void), takes an integer input n, and prints n smiley
// * faces to stdout. */

void smileyfacenumber(int n) {



  while ( 1 <= n) {
    n--;
    cout << " : D " << endl;
  }
}


int main() {

  int n;
  cout << "Input the number of times you want to see a smiley face: " << endl;
cin >> n;
  smileyfacenumber(n);



  return 0;

}

