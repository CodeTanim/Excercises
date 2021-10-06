#include <iostream>
using std::cout;
using std::endl;
using std::cin;

/* TODO: write a recursive function that prints the base 10 digits of n
 * vertically to cout.  for example, printVertically(2358) would print
 * 2
 * 3
 * 5
 * 8
 * Rules: you can't use any loops.  You can't use vectors or arrays.
 * Just let the recursive function calls do the work for you.  */

 void base10of(long int n) {


//the base case. when it reaches this it goes to the previous function call and executes whatever is needed with the associated number with that call.
   if(n == 0 ) {

  return;

}


     else {

 //cout << n%10 << endl; // having this here before calling the function below will have the effect of reversing the output.

       base10of(n/10); // This will keep getting called until it reaches 0. for example it will decrease like this.. 2358...235...23..2..0

       cout << n%10 << endl; //This is for the function when it starts going backwards as shown in the diagrams in your book. Each time it goes backwards it prints out the base digit associcated with a function call before moving on. for example 2%10 = 2... 23%10 = 3... 235%10 = 5... 2358%10 = 8...

}



 }

 int main() {


   base10of(2358);


   //This was just for testing purposes.
 // cout << 2358679142%10<<endl;





   return 0;
 }