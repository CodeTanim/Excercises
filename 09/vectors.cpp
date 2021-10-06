#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <string>
using std::string;

/* exercise: read all lines given on stdin and print them
 * back out in reverse order. */
/* NOTE: to test this out you can just echo some lines into
 * it like this:
 * $ echo -e "aaa\nbbb\nccc" | ./vectors
 * Or even give it a whole file, e.g. our program source:
 * $ ./vectors < vectors.cpp
 * (This command gives vectors.cpp to our program on stdin.
 * TODO: try it out.)
 * */

int main()
{
	vector<string> V;
	/* first read entire input into V: */
	string line; /* holds a single line */
	while (getline(cin,line)) {
		/* NOTE: getline is sort of like doing "cin >> line" but
		 * it will read all the way until a newline (\n) instead
		 * of reading until spaces/tabs. */
		V.push_back(line);
	}
	/* at this point, we have read all of stdin.  Now just
	 * print it in reverse order: */
	/* NOTE: V.size() tells you how many elements V has. */
	for (size_t i = V.size()-1; i != (size_t)(-1); i--) {
		cout << V[i] << "\n";
	}
	/* NOTE: size_t is a long unsigned integer -- it's set to be
	 * the largest integer that your computer can natively do
	 * arithmetic with. */
	// cout << "WE DID IT!!!!\n";
	return 0;
}

/* TODO: if you haven't already, read at least the first half or so of l3.pdf
 * (up until the section on arrays.)  Also read Prof. Li's notes, of course. */
/* TODO: write a function that takes a vector (say of integers) and searches
 * for a particular value x, returning true if and only if x is found. */
/* TODO: write a function that takes a vector of integers, and returns a
 * new vector of integers which contains only the odd integers. */
/* TODO: write a function that takes a vector V of integers which
 * is *sorted*, and returns a vector of the unique integers from V.
 * E.g., if V = {1,2,2,3,3,3,4}, then the result should
 * be {1,2,3,4}. */


/* NOTE: the exercises below might be more challenging. */

/* TODO: Try to do the prior exercise (removing duplicates in a sorted
 * vector) in a different way: modify the input vector *in-place*: that
 * is, have your function return void, and don't allocate any new vectors
 * in the function; just modify the vector that is given to the function
 * directly.
 * NOTE: to remove elements from the end, you can of course use pop_back(),
 * but another way is the "resize(n)" function, which will set the size to
 * be exactly n, removing the elements V[n],V[n+1],... if the original size
 * exceeded n.
 * */
/* TODO: write a *binary search* on a sorted vector.  The idea is to
 * kind of emulate the process you use to find a particular page in a book:
 * 1. open the book to some page in the middle.
 * 2. if the page number was too high, open to the middle of the pages to the
 *    left; if it was too low, open to the middle of the pages to the right
 * 3. continue as above until you found the right page.
 * */
/* TODO: write a function that takes a vector and places the elements
 * in sorted order.  There is a solution in l3.pdf, but you should try to
 * come up with something on your own first if possible. */

// vim:foldlevel=2
