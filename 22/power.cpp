#include <iostream>
using std::cout;
using std::endl;
using std::cin;

/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer.  (Pretty straightforward; similar to the
 * factorial example we did in class.) */




int power(int n) {

  int x = 2;

  if(n == 0) {

    return 1;

  }

  else {

    return x*power(n-1);

  }



}





int main() {



  cout << power(10) << endl;




  return 0;
}