#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <getopt.h> // to parse long arguments.
#include <cstdlib> // for atoi function

void puzzle(int n, int s, int e) {

  int b = e-s;

  if( n == 1) {

    cout << s << "   " << e << endl;

    return;

  }
    puzzle(n-1,b,s);

    cout << s << "   " << e << endl;

    puzzle(n-1,b,e);
}





int main() {



  int s = 1;
  int e = 3;

  int n = 3;


  puzzle(n,s,e);


  return 0;

}