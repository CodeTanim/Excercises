#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()

{

  int green, finaldifsum, evensum, oddsum;


  evensum = 0;
  oddsum = 0;

  while ( cin >> green)

  {

    if ( green % 2 == 0)
    {
    evensum = green + evensum;
    }


    else
    {
    oddsum = green + oddsum;
    }


}

finaldifsum = evensum - oddsum;

cout << "The difference of the sum of all the even and odd numbers are (evensum - oddsum)... " << finaldifsum << endl;

return 0;
}