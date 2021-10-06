#include <iostream>
using std::cin;
using std::cout;
using std::endl;
/* TODO: write a program to test the *Collatz* conjecture.  This conjecture
 * says that no matter what positive integer n I start with, the following
 * sequence always terminates in a finite number of steps:
 * 1. if n is 1, quit.
 * 2. if n is even, divide it by 2 and continue
 * 3. if n is odd, multiply it by 3 and add 1, then continue.
 * E.g., if n begins as 6, the sequence would be:
 *    6,3,10,5,16,8,4,2,1
 * Your program should read n, then print the number of steps until
 * you reach 1.  Number of steps for the above example is 8 (if n
 * is already 1, we would say it took 0 steps to get to 1).
 * Bonus (also good practice for project 2!) read more than one integer:
 * instead of doing the test once and quitting, read an integer, output
 * the number of steps, read another integer, output # of steps, and so
 * on, until stdin is exhausted.
 * */
/* TODO: find out which starting number in the range 1..10000 takes the
 * most steps to terminate. */

int main()
{

 int num;

cin >> num; // put in a number



 cout << " The collatz sequence is:  " << endl;
 cout << num << endl; //print out the number


while ( num != 1) { // keep running the loop until the number is not equal to 1. when it does equal 1, the loop will stop.

 if ( num % 2 == 0) { // This checks if the number is even.

  num = num / 2; // if number is even, divide it by 2 and overwrite the num variable with the new divided value. This new num variable will go through the loop again and if its an odd number it will execute the bottom else statement


 }

 else  {
  num = num*3 + 1; // this will again overwrite the variable num and continue on with the loop.



 }

 cout << num << endl;

 // This will keep printing the new number after doing the algebra for a num thats odd or even, and end only when the num = 1 because the while loop condition is that it cannot equal 1.
}


	/* your program goes here... */
	return 0;
}

// vim:foldlevel=2
