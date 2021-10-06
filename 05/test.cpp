#include <iostream>
#include <cmath>
#include <climits>
using std::cin;
using std::cout;
using std::endl;




int main ()
{

  int num, i;

  while (cin >> num) {

for ( i = num; i >= 2; i--){

 if ( num % i == 0 ) {

 cout << 0 << endl;
break;
 }
}

 }
 return 0;

}