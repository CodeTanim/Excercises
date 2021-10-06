#include <iostream>
#include <climits>
using std::cout;
using std::cin;
using std::endl;
using std::max;
using std::min;
/* TODO: write a program that computes the least common multiple (lcm)
 * of two integers given as input.  (Where should you start the
 * search?  What is the test to apply to each candidate?) */

 // the conditions for lcm are

int main()

{
  int num1, num2, i;

  cout << "Enter a number: " << endl;
  cin >> num1;

  cout << "Enter another number: " << endl;
  cin >> num2;


  for (i = min(num1, num2); i > 0; i--)
{

  if (num1 % i == 0 && num2 % i == 0)

  {
  num1 = num1/i;
   num2 = num1*num2;

  break;
  }
 }
  cout << "The least common multiple of these two numbers is " << num2 << endl;




return 0;

}


