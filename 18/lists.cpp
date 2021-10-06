#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data;
	node* next;
};

/* TODO: make sure you understand those pictures showing the
 * names of each part of a node when given only a pointer to it.
 * If you just master knowing the names of the pieces of such
 * pictures, the rest is easy! */

int main()
{
	/* TODO: try to write a program that reads all integers from stdin
	 * into a list.  IDEA: insert each new node at the beginning, using
	 * the outline from lecture.  This might not be easy, so we'll go
	 * through it carefully next class if you don't figure it out. */
	node* p = NULL; /* pointer to beginning of list */
	int x; /* storage for new number from standard input */
	while (cin >> x) {
		/* add new node with x to the beginning of the list */
	}
	/* TODO: See if you can write something to print out the list's
	 * contents.  (If you get stuck, it is covered in l4.pdf.) */
	return 0;
}

// vim:foldlevel=2
