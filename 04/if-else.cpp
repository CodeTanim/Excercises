#include <iostream>
using std::cout;
using std::cin;

/* NOTE: Here is the if-statement's general form:
 * if (<boolean expression>) {
 *     // arbitrary statements...
 * } else if (<boolean expression>) {
 *     // arbitrary statements...
 * } else {
 *     // arbitrary statements...
 * }
 * */
/* NOTE: boolean: true/false value */
/* and there are at least the following boolean operators:
 * ==
 * <
 * >
 * <=
 * >=
 * !=
 * */

int main()
{
	/* NOTE: any integer counts as a boolean! */
	if (47) {
		cout << "47 is true I guess?\n";
	}
	/* rules/convention: 0 is false, and ANY other integer
	 * is interpreted as true */
	/* NOTE: assignment statements are expressions!  They
	 * will evaluate to whatever the new result is. */
	int x = 47;
	int y = 99;
	x = y; /* this (a) changes x to y's value, but also (b) evaluates
	          to the value of y (which is now also the value of x). */
	if (x = y) {
		cout << "x and y were equal\n";
		// cout << (x=y) << "\n"; // prints value of y
	} else {
		cout << "not equal\n";
	}
	cout << "x == " << x << "\ny == " << y << "\n";
	return 0;
	/* TODO: take note of the compiler warning you get about the
	 * assignment used as a boolean.  And remember to compile with
	 * -Wall!  (I will always put that in the makefiles.) */
}
/* TODO: read through lecture 4 of Prof. Li's notes if you haven't
 * done so already. */

// vim:foldlevel=2
