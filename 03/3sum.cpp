#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()

{

  int red, blue, yellow;

  cout << "Enter some numbers, up to 3 to get an average"<< endl;


  cin >> red;

  cin >> blue;

  cin >> yellow;


  red = (red + yellow + blue)/(3);

  cout << "The average is " << red << endl;

  return 0;

}