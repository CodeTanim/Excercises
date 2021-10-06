#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <cmath>
using std::endl;

/* TODO: write down that polynomial evaluation function from lecture
 * and test it out. */


int polyval(vector<int>&V) {

  size_t n = V.size();

  int sum = 0;

  for (size_t i = 0; i < n; i++) {


    sum  = sum  + pow(V[i],i);


  }


  return sum;

}





int main(){


  int x;
  vector<int> V;
  while(cin >> x) {

    V.push_back(x);
  }

  cout << endl;

  cout << "The sum of all the numbers raised to the ith power is: " << endl;

  cout << polyval(V) << endl;



  return 0;

}







