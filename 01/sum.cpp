#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()

{

  int green, blue;

  green = 0;


  while ( cin >> blue )

  {
    if ( green >= blue || green <= blue)

    { green = blue + green;

    }
  }

  cout << " The sum of the numbers inputted are: " << green << endl;

  return 0;

}
