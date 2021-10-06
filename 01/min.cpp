#include <iostream>
#include <climits>

using std::cin;
using std::cout;

int main()

{

  int green, blue;


  green = INT_MAX;

  while(cin >> blue)

{
  if ( green > blue)

  {
    green = blue;
  }
}

cout << " The smallest numbers from the numbers inputted are " << green << std::endl;

return 0;

}





