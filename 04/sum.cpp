/* compute the sum of all integers given on stdin */
#include <iostream>
using std::cout;
using std::cin;

int main()
{
	/* our variables / notes: */
	int green; /* holds new inputs */
	int blue = 0; /* holds sum of all values read so far */
	// cout << "initial value of blue: " << blue << "\n";
	while (cin >> green) {
		// blue = blue+green;
		blue += green;
	}
	cout << "sum is " << blue << "\n";
	return 0;

	/* NOTE: this code will never happen!  (It is after the return...) */
	/* consider a simple loop that prints numbers from 0..9: */
	int x = 0;
	while (x < 10) {
		cout << x << "\n";
		x++;
	}
	/* there is another form of loop that might be more convenient
	 * for things like this (where you know the bounds): */
	for (x = 0; x < 10; x++) {
		cout << x << "\n";
	}
	/* general form: */
	// for (<init that happens just once>; <boolean-expr>; <update>;) {
	// 	/* arbitrary statements... */
	// }
	/* NOTE: the update statement happens *after* the body. */
	/* BTW, all of those pieces are optional!  You can make
	 * an infinite loop by just leaving them all out: */
	for (;;) {
		/* do this forever 8D */
	}
}

/* TODO: if it isn't totally obvious how to do so, write a program
 * that computes the product of all numbers given (on stdin).  (Maybe
 * start a new file called "product.cpp" for this, and try to do it
 * from scratch, without looking at this file.)  */







/* TODO: write a program that computes the following strange thing:
 * the difference of the sum of all the evens and the odds.  E.g. if
 * the input were 4 7 6 then the output would be 3 (= (4+6) - 7).
 * You can figure out even oddness by using the % operator which computes
 * the *remainder* of a division.  Hint: don't try to compute those
 * sums separately -- maybe just add a negative sign to each odd number
 * that you read.



 * Bonus question: can you do this without an if statement? */
/* TODO: given an integer n, find exponent of the largest power of two that
 * divides n.  Example: if n = r*8 with r odd, then you should output 3
 * since 8 = 2^3.  (You are just recovering the exponent of the 2 in the
 * number's factorization into primes.)
 * (IDEA: keep on dividing n by two until we can't, and keep track of how
 * many times it worked.) */





/* TODO: try the exercises at the end of l1.pdf, and maybe start reading
 * l2.pdf, as well as lectures 5-8 from Prof. Li. */

#if 0
NOTE: here are some ways you can test out the program:

Type in numbers manually:
+[04]$ ./sum
3
7
5
10
sum is 25
(Hit ctrl+d to end the input.)

Use the `echo` command:
+[04]$ echo 3 7 5 10
3 7 5 10
+[04]$ echo 3 7 5 10 | ./sum
sum is 25

`echo` a range of numbers:
+[04]$ echo {1..10}
1 2 3 4 5 6 7 8 9 10
+[04]$ echo {1..10} | ./sum
sum is 55

Make a test file:
+[04]$ echo {1..10} > numbers
+[04]$ cat numbers
1 2 3 4 5 6 7 8 9 10
+[04]$ ./sum < numbers
sum is 55

TODO: try to understand the above shell commands.
#endif

// vim:foldlevel=2
