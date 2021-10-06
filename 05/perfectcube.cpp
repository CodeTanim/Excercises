#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/* TODO: write a brute force test for perfect cubes.  Check if
 * n = k^3 for some integer k. */



int main () {


int num, cube;

  cin >> num;

  for (int k = 1; k <= num; k++) {


    cube = k*k*k;

    if (cube == num) {

      cout << "The number " << num << " is a perfect cube."<<endl;
break;
    }

    else if ( cube > num)
    {  cout << "The number is not a perfect cube."<< endl;
      break;
    }

  }

  return 0;
}
