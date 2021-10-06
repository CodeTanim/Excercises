#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

//The inefficient method of polyval, but it works. now try the horners method.

void polyval(vector<int>&V,int &x) {


size_t n = V.size();

  int sum = 0;

  // This is the last coefficient value and it doesnt haves anything raised to a power, so it is a constant.
  int constant  = V[n-1];

  for (size_t i = n-1; i >= 1; i--) {


    //the for loop starts at i = n-1 and goes backwards because thats where the highest index is and would correspond with the highest exponent.
    // when multiplying the coefficient we need to make sure it matches up with the corresponding index, thats why there is a V[n-1-i] below which goes in the reverse of the for loop but the right way of our initial input elements, matching up nicely with the exponents and the x values. below is a represention of what an iteration would evaluate.

          // 0 +   2     *     3^2
    sum =  sum + V[n-1-i]*(pow(x,i));


  }

cout << endl;
  cout << "The value of the polynomial at the point " << x << " is : " << endl;


   cout << constant + sum << endl;


}


int main() {

  int y;

  vector<int> V;

int x;
 cout << "Enter an evaluation point: " << endl;
cin >> x;


cout << "Enter the coefficient values of a polynomial function: " << endl;

   while (cin >> y){

    V.push_back(y);

  }

 polyval(V,x);


return 0;



}