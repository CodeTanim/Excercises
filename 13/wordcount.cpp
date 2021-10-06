#include <iostream>
using std::cout;

int main()
{
	size_t count = 0; /* store count of words */
	int tokenlocation = 0; /* left side; just read space */
	/* 1 will indicate that we just read a non-space */
	char c; // storage for character from stdin
	/* NOTE: what looks like the obvious solution using cin (e.g.
	 * while (cin >> c)) actually does not work, as it will skip
	 * over whitespace chars which we want to read.  Hence our
	 * usage of scanf which is more straightforward.
	 * Check out "man scanf" for details. */
	while (scanf("%c",&c) > 0) {
		/* now program the diagram: move the token around, and
		 * increment the count when we find new words.  there should
		 * be a condition for each arrow... */
		if (tokenlocation == 0) { /* just read space */
			if (c != ' ' && c != '\t' && c != '\n') {
				/* green arrow; this is the start of a new word! */
				count++; /* same as count = count+1 */
				tokenlocation = 1;
			} // else {nothing to do; token doesn't move...}
		} else { /* just read non-space */
			if (c == ' ' || c == '\t' || c == '\n') {
				/* blue arrow; this is the end of a word */
				tokenlocation = 0;
			} // else {nothing to do; token doesn't move...}
		}
	}
	cout << "# words: " << count << "\n";
	return 0;
}

/* TODO: convince yourself (ideally by giving a mathemaical proof)
 * that the boolean expression (c != x || c != y) is the same as
 * (true) whenever x is different than y. */
/* TODO: Understand De Morgan's law if you don't already:
 * https://en.wikipedia.org/wiki/Demorgan%27s_law
 * Apply the law to the above exercise, which I think makes it
 * rather obvious.  */
/* TODO: keep track of the invidivdual words you have read in a
 * vector<string>.  The idea is to build up a string for the
 * current word while the token is on the right, and when it
 * moves back to the left (blue arrow) your word is complete and
 * you can add it to the vector and start a new one. */
/* TODO: (this will likely be a little challenging...) Try to write
 * a program that reads C/C++ source and removes the comments (the
 * program should print a version with comments removed to stdout).
 * Start by drawing a state transition diagram which will help you figure
 * out if the character you are reading is inside of a comment or not.
 * */


// vim:foldlevel=2
