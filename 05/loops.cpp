#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* warm up: print a rectangle of n x m "*" characters.  E.g.
	 * if n == 4 and m == 5, we might get this:
	 * * * * *
	 * * * * *
	 * * * * *
	 * * * * *
	 * */
	int n,m;
	cin >> n >> m; /* read n and m from standard input */
	// cout << "matrix of (i,j) pairs:\n";
	for (int i = 0; i < n; i++) {
		/* NOTE: goal for body of this loop (which will happen n times)
		 * is to print a row of m stars (including newline!).  We can
		 * do that with yet another loop: */
		for (int j = 0; j < m; j++) {
			cout << "* ";
			/* TODO: uncomment the printf below, and comment out the cout
			 * statement above to print the matrix of (i,j) values.  Then
			 * make sure you understand the output (trace through these
			 * loops with your imagination and compare the result). */
			// printf("(%i,%i) ",i,j);
		}
		cout << "\n";
	}
	return 0;
}

/* TODO: change this so you get a "hollow" rectangle.  E.g. if n==4
 * and m==5, you would have this: */
// * * * * *
// *       *
// *       *
// * * * * *

// vim:foldlevel=2
