#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* datatypes: "annotations" of variables.  Behind the scenes (in main
	 * memory) *all* values are just numbers, so these annotations provide
	 * information about how the values should be interpreted.  They also
	 * determine the space required (compiler cares about this). */
	int x = 99;  /* x stores an integer (usually in the range
					INT_MIN==2^-31 .. INT_MAX==2^31-1) */
	// unsigned int z = 1234; /* range 0..2^32-1 (can't store negatives! */
	char c = 'a'; /* stores a *single* character */
	double y = 23.7; /* stores a floating point number */
	/* NOTE: you can actually see the size of each of these (which might
	 * vary depending on the computer!): */
	cout << "int takes " << sizeof(int) << " bytes\n";
	cout << "char takes " << sizeof(char) << " bytes\n";
	cout << "double takes " << sizeof(double) << " bytes\n";
	/* NOTE: seems like rigidity of types might be a nuisance, but it is
	 * actually helpful!  It enables the compiler to reason more
	 * deeply about your program, which can help you catch errors
	 * early.  Compiler errors are usually much easier to fix than
	 * logical / runtime errors. */
	/* NOTE: there are built in conversion between some of the datatypes: */
	x = y; /* x will lose the fractional part of y: */ //since x is classified as an integer and cannot hold decimals
	cout << "y == " << y << "\n";
	cout << "x == " << x << "\n"; //this is shown here where the previous line of code replaced x with y but x cannot handle the .7 so it prints the whole number 23. The number always seems to round down.
	x = c; /* this works too! */ // This again replaces the x value with the value associated with c. But since x is an int type, it can only output whole numbers. So, instead of outputting 'a', it outputs the numerical representation of the letter a, per ASCII rules. which is 97.
	cout << "x == " << x << "\n";
	/* NOTE: each character has a numeric value (see ASCII). */
	/* NOTE: you can temporarily "convert" from type to another
	 * without saving in another variable: */
	cout << "c == " << c << " == " << (int)c << "\n";
	/* above "(int)" is called "type casting".  We temporarily form
	 * the "integer version" of c. This just straight up says to output the interger version of whatever letter is in c, which in this case would be 97 = a.
	 * TODO: try to write a small program that produces an ASCII table:







	 * that is, it prints out the symbolic characters and their integer
	 * (ASCII) representation side by side.  Hint: you can start with
	 * space (' ' == 32) and end with '~' (== 126?).  Use typecasting
	 * to get cout to print both representations.  */
	/* NOTE: maybe avoid floating point if you can: */
	double f = 0.3;
	y = 0.1;
	if (y + y + y == f) {
		cout << "y+y+y == f, as it should\n";
	} else {
		cout << "they weren't equal????\n";
	}
	/* They aren't the same!  There can be *rounding error* with
	 * floating point numbers.  Scary stuff: algebraic identities
	 * might not hold... makes it harder to reason about your program.
	 * TODO: try to find an example violating the "cancellation law".
	 * That is, declare three doubles, d,e,f, and give them values such
	 * that d != e, and yet the sum of d+f is equal to e+f. */

	/* question: what datatype do you get when you combine floating
	 * point and integers? */
	cout << "x + f == " << x + f << "\n";
	/* when combining (via arithmetic) floating point and integer,
	 * the result is "upgraded" to floating point. */
	/* TODO: see if you can figure out what happens when you combine
	 * integers with arithmetic.  In particular, what is the datatype
	 * you get when *dividing* one integer by another? */
	return 0;
}

/* TODO: write a small program that reads 3 integers (from stdin, using
 * cin), and prints the *average* of the 3 to stdout (using cout).
 * TODO: do the same for 5 integers, but ONLY USE TWO VARIABLES! */
/* TODO: try to use the Makefile I've provided.  Just run the command
 * "make" and it will run g++ for you with some recommended flags.
 * (NOTE: it prints out exactly what commands it is running.)
 * Advice: you should pretty much always compile with the flag -Wall.
 * From here out, I will usually give you makefiles to facilitate.
 * (NOTE: my makefile will produce an executable with a similar name
 * to the cpp file instead of "a.out".)
 * */

// vim:foldlevel=2
