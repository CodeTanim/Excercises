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
/* TODO: make sure you know what an assignment between pointers
 * does (thinking in terms of the pictures). */

int main()
{
	node* L = NULL; /* pointer to beginning of list */
	/* NOTE: NULL denotes the end of the list, but more generally
	 * it is used to signify a meaningless pointer (you should never
	 * dereference NULL!). */
	int x; /* storage for new number from standard input */
	while (cin >> x) {
		/* add new node with x to the beginning of the list */
		/* step 1: make new node */
		node* p = new node;
		/* step 1.5: set value of new node to x */
		p->data = x;
		// same as (*p).data = x;
		/* step 2: redirect pointer coming out of new node
		 * to point to first node in list. */
		p->next = L;
		// same as (*p).next = L;
		/* step 3: change L to point to the new node */
		L = p;
	}
	/* TODO: print list to stdout.
	 * IDEA: make another pointer which initially points to the same
	 * node as L (that is, the beginning).  Then move it through the
	 * list, printing p->data as you go. */
	return 0;
}

/* TODO: try to write a function that reads all of stdin into a
 * list, but preserving the order (our method above reverses the
 * order).  (You could store an extra pointer that tells you where
 * the end of the list is...) */

/* TODO: see if you can figure out how to write a function that would
 * clear a list.  Setting L = NULL makes the list look empty, but those
 * nodes would still be floating around taking up memory!  You have to
 * go through and deallocate each one (by calling delete). */

// vim:foldlevel=2
