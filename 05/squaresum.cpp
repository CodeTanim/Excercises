#include <iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

/* TODO: sum the squares of all integers from 1..100.
 * I.e., compute 1+4+9+...+10000  (note that the sum has 100 terms) */

 int main()

 {
 int sum, num;

 sum = 0;


   for ( num = 0; num <= 100; num ++)

   {
     sum = num*num + sum;

   }

   cout << "The sum of all squares from 1 to 100 is: " << sum << endl;

   return 0;
 }