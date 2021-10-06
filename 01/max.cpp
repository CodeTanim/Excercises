#include <iostream>
using std::cin;
using std::cout;
/* NOTE: the above includes someone else's program into our own.
 * In particular, the code that defines cin and cout, which we will
 * use to read inputs and write outputs.  More about that later. */

/* "main()" is the official "starting point" for our program.
 * If you are curious as to why we need such a thing, note that a
 * C++ program could be spread over many different files, so the
 * seemingly obvious "start at the top" rule wouldn't work in general.
 * */
int main()
{
	/* to get the pieces of paper: *variables*.
	 * These just give you storage space for numbers and such. */
	int green;
	/* the above says "let there be a piece of paper named green
	 * which will hold an integer".  the "int" is the *datatype* and
	 * "green" is the *name*.
	 * NOTE: In C++ all variables must have a datatype. */
	int blue;

	/* listen for number; record on green */
	cin >> green;
	/* (remember our idea for the green paper: it should hold
	 * the largest number we've heard so far.  And rignt now it is
	 * true!  "green" has the *only* number we've heard so far, so
	 * it is the largest so far as well. */
	/* NOTE: more explanation on cin will follow... for now just accept
	 * it as a bit of magic. */

	/* Summary of the next steps of our process: */
	/* 1. listen for new number on blue
	 * 2. compare with green
	 * 3. if blue one is larger, overwrite green... */

	/* here it is in c++, but don't worry -- we will go through all this
	 * in more detail soon. */

	while (cin >> blue) { /* while there are new #'s, read one into blue */
		if (green < blue) { /* if new # in blue is bigger... */
			/* ...then overwrite green with the # stored in blue */
			green = blue;
			/* NOTE: above is called an *assignment statement*.
			 * The thing on the left hand side will be overwritten
			 * with the contents of whatever is on the right. */
		}
	}
	/* At this point, we're out of numbers (our attempt to read another
	 * one into blue did not succeed).
	 * So we can now print the largest number, which we know will be
	 * stored in green: */
	cout << "The largest number was " << green << "\n";

	return 0;
}

/* TODO: Get started on the reading.  In particular, the first
 * lecture from Prof Li, and my first lecture (l1.pdf).  You
 * can find links on the reading schedule. */
/* TODO: Try to get the virtual machine running on your
 * computer, and then try out the tutorial on compiling:
 * https://www-cs.ccny.cuny.edu/~wes/CSC103/commandline.html
 * */
/* TODO: introduce some errors and observe the compiler
 * messages that result.  In particular, maybe try these:
 * 1. Try to assign to a constant, e.g., "999 = blue;"
 * 2. Remove the quotes surround the text "The largest..."
 * 3. Use "<<" for cin, or ">>" for cout.  This can produce
 *    a quite nasty message!
 * */
/* Reminder: if you compiled simply with "g++ max.cpp",
 * then you can run your program with some numbers as
 * input like this:
 * $ echo 23 77 28 191 273 | ./a.out
 * You can also just run it with "./a.out" and type the numbers
 * in.  Then press ctrl+d when you are done entering numbers.
 * */

// vim:foldlevel=3
