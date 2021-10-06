#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::min;

int main()

{

  int red, blue, d;

  cout << "Enter a number: " << endl;
  cin >> red;

  cout << "Enter another number: " << endl;
  cin >> blue;

  for (d = min(red, blue); d > 0; d--)
{

  if (red % d == 0 && blue % d == 0)

  {
  cout << "The greatest common divisor of these two numbers are: " << d << endl;
    break;
  }


}
return 0;

}