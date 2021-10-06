#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

//Horner's rule applied for polynomial evaluation at a point. todo excercise



void horner(vector<int> &V) {

int x;
  cout << " Enter an evaluation point: " << endl;
cin >> x;

size_t n = V.size();
int sum = V[0];

for (size_t i = 1; i < n; i++ ) {

    // first element in the vector corresponds to the first coefficient value. It is mulitplied by the point given.
   sum = sum*x;
// the answer from the above line is then added with the next element in the vector, which is then sent back up to be multiplied by the given point x.
   sum = sum + V[i];



}

cout << "The value of the polynomial at that point is : " << endl;
cout << sum << endl;

}


int main() {

  vector<int> V = {5,7,9,10};


  horner(V);



  return 0;
}