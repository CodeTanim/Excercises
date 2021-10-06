#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
/* TODO: write a "pop_front" function that removes the first element.
 * It should preserve the order of the other elements.
 * NOTE: if you don't care about preserving the order of elements, there
 * is a much more efficient way to remove the first element (or any other
 * element).*/

 // use a second vector to store the reverse of the list inputted and then use pop_back. So two functions to be created. One to reverse, the other to popback, which would technically pop_front of the original list.


void popfront(vector<int> &V, vector<int> &W, vector<int> &Z) {

  size_t n  = V.size();

  //pushes the reverse of V in vector W.
  for ( size_t k = 0; k < n; k++) {

    W.push_back(V[n-1-k]);

  }

  // gets rid of the element in the back of W
 W.pop_back();


  // pushes the reverse of W into the empty vector Z ehich corresponds to the order of V, the original vector.
  size_t c = W.size();
  for ( size_t j = 0; j < c; j++) {

  Z.push_back(W[c-1-j]);


}

}



int main() {

  int x;
  vector<int> V;
  vector<int> W;
  vector<int> Z;

  //takes in user-input and stores it in vector V.
  while(cin >> x) {

    V.push_back(x);

}


cout << endl;
cout << "The list with the first element deleted is: " << endl;

//get rid of the back element in  W, which would be the front of V and then stores it in reverse in the empty vector Z
popfront(V,W,Z);


size_t b = Z.size();

// Prints the new vector Z which is in the same order as V but with the first element deleted.

for ( size_t q = 0; q < b; q++) {


  cout << Z[q] << endl;


}

return 0;

}



