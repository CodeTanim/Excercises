#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::size_t;
using namespace std;


void poly(vector<int> & V, vector<int> & W) {




  for (size_t i = 0; i < V.size(); i++) {

     W.push_back(pow(V[i],i)); // each number stored in V is raised to the power of its corresponding index and stored in the vector W.


  }
}



int main() {

  vector<int> V;
  vector<int> W;
int c;

  cout << "Enter some numbers and they will be summed up: " << endl;




  while (cin >> c) {

  V.push_back(c); // Srores all inputs in the vector V.

  }

  poly(V,W); // Executes the main function

  cout << endl;




  cout << "The sum of the numbers with each of them being raised to their corresponding index is: " << endl;
cout << accumulate(W.begin(),W.end(),0) <<endl; // sums up all of the values in the vector W.






  return 0;

}