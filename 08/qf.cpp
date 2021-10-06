#include <iostream>
using std::cin;
using std::cout;
#include <cmath>

/* NOTE: this function will try to find the roots of the polynomial
 * described by f(x) = ax^2 + bx + c.  Roots will be stored in
 * r1 and r2; discriminant D = b^2 - 4ac will be returned. */
double qf(double a, double b, double c, double& r1, double& r2);
/* NOTE: above is called a "prototype" */

int main()
{
	double root1,root2; /* storage for outputs from qf */
	double a,b,c; /* coefficicents of f(x) */
	cin >> a >> b >> c;
	double D = qf(a,b,c,root1,root2); /* won't compile without prototype! */
	/* TODO: briefly comment out the prototype, try to compile and take
	 * note of the resulting error messages. */
	if (D < 0) {
		cout << "No real roots!\n";
	} else if (D == 0) { // double root!
		cout << "Double root @ " << root1 << "\n";
	} else { // two roots
		cout << "Roots are " << root1 << "," << root2 << "\n";
	}
	return 0;
}

double qf(double a, double b, double c, double& r1, double& r2)
{
	/* compute discriminant: */
	double D = b*b - 4*a*c;
	if (D >= 0) {
		r1 = (-b + sqrt(D))/(2*a);
		r2 = (-b - sqrt(D))/(2*a);
	}
	return D;
}

/* TODO: try to come up with function PROTOTYPES for the following tasks
 * (I'm not asking you to actually write the functions!):
 * 1. A function that converts pounds to kilograms.
 * 2. A function that prints an n x m rectangle of '*' characters to stdout.
 * 3. A function that takes a string as input and outputs the number of
 *    vowels in the input.
 * 4. A function that takes a string as input and outputs the number of
 *    occurrences of each vowel (a,e,i,o,u) found in the input.
 * */
/* TODO: start reading l3.pdf for next time and have a good weekend. */

// vim:foldlevel=2
