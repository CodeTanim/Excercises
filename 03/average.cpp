#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int red, blue;


  blue = 0;

  cout << "Enter some numbers, up to 5 to get an average"<< endl;

  while ( cin >> red)

  {

    blue = red + blue;


  }

   red = blue/5;


  cout << "the average is: " << red << endl;


  return 0;

}