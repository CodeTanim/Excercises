
/* TODO: (this one is more involved...) print a list of all right triangles
 * such that (a) the sides are integer length; and (b) no side is longer
 * than 30 units.  You can "print" it just by printing the side lengths.
 * Try to avoid printing duplicates!   E.g., (3,4,5) is really the same
 * as (4,3,5)...  If you need a hint, maybe consider giving the sides in
 * increasing order by length.
 * */

 #include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {

  int i,j,k,num;

  cin >> num;

  for ( i = 1; i <= num; i++) {
    for (j = i+1; j <= num; j++) {
      for (k = j + 1; k<= num; k++) {

        if ( i*i + j*j == k*k)
        {
          cout << i << " " << j << " " << k<< endl;

        }
           else if ( i*i > 900 || j*j > 900 || k*k > 900)
           {    cout << "error"<< endl;
                   break;
           }
      }
    }
  }

  return 0;
}
















