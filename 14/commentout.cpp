#include <stdio.h>

/* new thing: enumerations.  Just make a collection
 * of integers with convenient names.  We use this for
 * the states: */

enum state {
	normal,
	oneslash,
	linecomment,
	mlcomment,
	mlstar
};

int main()
{
	// printf("%i,%i,%i,%i,%i\n",normal,oneslash,linecomment,mlcomment,mlstar);
	char c; /* hold current character */
	state s = normal; /* hold current state */
	while (scanf("%c",&c) > 0) {
		/* depending on state, print c or leave it out.  Also
		 * want to update the state of course... */
		switch (s) {
			case normal:
				if (c == '/') {
					s = oneslash;
				} else {
					printf("%c",c);
				}
				break;
			case oneslash:
				if (c == '/') {
					s = linecomment;
				} else if (c == '*') {
					s = mlcomment;
				} else {
					/* remember to print out slash that didn't turn out
					 * to be part of a comment! */
					printf("/%c",c);
					s = normal;
				}
				break;
			case linecomment:
				if (c == '\n') {
					s = normal;
					/* XXX do we want to print the newline??
					 * Seems like "yes" is the best default. */
					printf("\n");
				}
				break;
			case mlcomment:
				if (c == '*') {
					s = mlstar;
				}
				break;
			case mlstar:
				if (c == '/') {
					s = normal;
				} else if (c == '*') {
					/* stay here... */
				} else {
					s = mlcomment;
				}
				break;
		}
	}
	return 0;
}

/* TODO: try this out, and get familiar with a diff program.
 * Examples to run it on its own source:
 * $ vimdiff commentout.cpp <(./commentout < commentout.cpp )
 * $ ./commentout < commentout.cpp | git diff --no-index commentout.cpp -
 * $ diff commentout.cpp <(./commentout < commentout.cpp )
 * NOTE: It's subjective, but I think vimdiff is easiest to read,
 * followed by git's diff, followed by plain diff.
 * */
/* TODO: try to draw the finite state machine on your own and
 * see what you come up with. */
/* TODO: read section 1 of l4.pdf, and finish up l3.pdf if you haven't
 * already. */

// vim:foldlevel=3
