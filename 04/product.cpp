#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()

{
  int green, blue;

  blue = 1;

  while ( cin >> green)

  {
    blue = green*blue;

  }

cout << "The product of the numbers inputted are: " << blue << endl;

  return 0;

}