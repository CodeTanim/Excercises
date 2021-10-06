#include <iostream>

using std::cout;
using std::cin;
using std::endl;


/* TODO: change this so you get a "hollow" rectangle.  E.g. if n==4
 * and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *
int main ()
{

  int rows,columns;
	cin >> rows >> columns; /* read n and m from standard input */
	// cout << "matrix of (i,j) pairs:\n";
	for (int i = 0; i < rows; i++) {



		for (int j = 0; j < columns; j++) {

			if ( i == 0 || i == rows-1 || j == 0 || j == columns-1 ) {
  cout << " * " ;
			}

			else {
				cout << "   ";
			}



	}
    cout << endl; // goes to a new line after printing the required amount of rows



  }








  return 0;
}