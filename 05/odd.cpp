#include <iostream>
# include <math.h>
using std::cout;
using std::cin;
using std::endl;

//TODO: write a loop that prints the sum of the first n odd cubes.

int main()

{

  int num, sum;

  sum = 0;


cout << "Enter some numbers: " << endl;

while ( cin >> num)

{
  if ( num % 2 != 0)

  {
    num = num*num*num;


    sum = num + sum;
  }

}
cout << "The sum of the first odd cubes are " << sum << endl;
  return 0;

  }



