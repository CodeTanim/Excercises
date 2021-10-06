
#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;


/* TODO: Write down the recursive gcd solution we outlined in lecture. */
/* TODO: Figure out, as a function of the input parameters, approximately
 * how many steps it will take to compute the gcd.  (It's delightfully
 * few as it turns out!) */



  int gcd(unsigned int a, unsigned int b){

   if( b == 0)
   {


    return a;
   }



   return gcd(b,a%b);



 }








int main() {

 cout << "Input two numbers and I will spit out the GCD for you" << endl;

 int a;
 int b;

 cin >> a;
 cin >> b;

cout << endl;
cout << "The GCD of " << a << " and " << b << " is: " << endl;
cout << gcd(a,b) << endl;



  return 0;

}