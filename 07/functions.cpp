#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int g = 0; /* global variable! */
/* NOTE: try to avoid global variables when possible.  They often
 * create unnecessary complexity by making it harder to understand
 * the connections between different parts of your program. */

/* nonsense function to demonstrate functions: */
int f(int x)
{
	g++; /* first time, g is now 1 */
	x++; /* also increment parameter...for reasons */
	return g+x;
}

/* write a function to swap contents of variables: */
void swap (int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
/* TODO: try to write the swap function above from scratch */

/* TODO: write a function that has no return value (i.e., return
 * type is void), takes an integer input n, and prints n smiley
 * faces to stdout. */

/* TODO: write a function called "max" that takes 3 integer
 * parameters and returns an integer value which is the largest
 * of the 3 inputs. */

int main(void)
{
	int y = 2;
	cout << "f(y) = " << f(y) << "\n";
	cout << "y = " << y << "\n";
	/* NOTE: above shows that x has its own piece of memory!
	 * If not, then y would have been changed to 3 via the x++
	 * in the function. */
	cout << "f(y) = " << f(y) << "\n";
	/* NOTE: f(y) gives a different value with each call since
	 * its definition depends on (changing) global state (g) */
	int z=42,w=33;
	printf("(z,w) = (%i,%i)\n",z,w);
	swap(z,w);
	printf("(z,w) = (%i,%i)\n",z,w);
	/* TODO: add some calls to the functions you wrote above for
	 * the other exercises. */
	return 0;
	/* TODO: find out what happens if we call swap(3,4), and see
	 * if you can make sense of what the compiler tells you.
	 * (You should recognize "swap(3,4)" as nonsense.  If not,
	 * keep thinking about it until you see why.) */
}

// vim:foldlevel=2
