#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void g(int n)
{
	if (n == 1) {
		/* base case */
		cout << "base case @ n == 1\n";
		return;
	}
	cout << "About to make recursive call; n == " << n << "\n";
	g(n-1);
	cout << "Done making recursive call; n == " << n << "\n";
	/* TODO: make sure the output produced by calling g(5)
	 * makes sense.  Remember that g(5) has to wait for g(4)
	 * to finish, which has to wait for g(3)... */
	return;
}

/* Compute Fibonacci Sequence */
int fib(int n)
{
	if (n < 2) return 1;
	return fib(n-1) + fib(n-2);
}

/* TODO: note that this takes a long time for n > 50.
 * Figure out why!  (Try to make a drawing of how the
 * function calls play out.) */

int main()
{
	// g(5);

//	cout << fib(4) <<endl;

	for (size_t i = 0; i < 10; i++) {
		cout << fib(i) << "\n";
	}
	return 0;
}

/* TODO: write a recursive function to compute x^n (x to the n power)
 * where n is an integer.  (Pretty straightforward; similar to the
 * factorial example we did in class.) */
/* TODO: write a recursive function that prints the base 10 digits of n
 * vertically to cout.  for example, printVertically(2358) would print
 * 2
 * 3
 * 5
 * 8
 * Rules: you can't use any loops.  You can't use vectors or arrays.
 * Just let the recursive function calls do the work for you.  */
/* TODO: Keep reading l5.pdf. */

// vim:foldlevel=2

