#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* warm up: print a triangle of n "*" characters.  E.g.
	 * if n == 4:
	 *
	 * *
	 * * *
	 * * * *
	 * */
	size_t n;
	cin >> n; /* read n from standard input */
	/* IDEA: print row by row.  Observation: the i-th row has
	 * i stars in it. */
	for (size_t i = 1; i <= n; i++) {
		/* print i stars and a new line */
		for (size_t j = 0; j < i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
	/* NOTE: size_t is an UNSIGNED integer (can't store negative
	 * values) that is as large as a machine register.  */
	return 0;
}

/* TODO: modify the above so it prints a reflected (y-axis) triangle: */
//       *
//     * *
//   * * *
// * * * *

/* TODO: modify further so that it prints a "hollow" triangle
 * (see the related exercise with rectangles from a few
 * lectures back). */

// vim:foldlevel=2
