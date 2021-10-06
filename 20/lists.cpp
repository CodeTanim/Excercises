#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data;
	node* next;
};

int main()
{
	node* L = NULL; /* pointer to beginning of list */
	/* NOTE: NULL denotes the end of the list, but more generally
	 * it is used to signify a meaningless pointer (you should never
	 * dereference NULL!). */
	int x; /* storage for new number from standard input */
	node* e = NULL; /* invariant: e should point to last node in list */
	if (cin >> x) { /* add first node explicitly to L */
		L = new node;
		L->data = x;
		L->next = NULL;
		e = L;
	}
	/* NOTE: now our "generic" picture is true!  L points to a
	 * non-empty list and e is a pointer to the last node. */
	/* now we can attach each new node to e as in our diagram */
	while (cin >> x) {
		e->next = new node;
		/* at this moment, our invariant (e points to last node)
		 * is broken (e no longer pointer to last)!  So we fix it: */
		e = e->next; /* update e to again point to last node */
		e->data = x;
		e->next = NULL;
	}
	/* print contents of list: */
	node* p = L; /* p will move through each node of the list.
	                we'll print p->data over and over. */
	while ( p!=NULL /* p is a valid pointer */) {
		/* print data from node pointed to by p */
		cout << p->data << " ";
		p = p->next;
	}
	cout << "\n";
	/* now that we are done with the list, free the space for
	 * all the nodes */
	while (L != NULL /* there are nodes to delete */) {
		/* delete first node */
		node* p = L; /* make copy of pointer */
		L = L->next; /* skip over old first node */
		delete p;    /* delete old first node */
	}
	return 0;
}

/* TODO: write a function that reverses the order of nodes in a list.
 * Try to do this *without allocating any new nodes*!  Just rearrange
 * all the pointers.  NOTE: this is somewhat tricky.  If you figure
 * this out all by yourself, you are well on your way to linked list
 * mastery! */

// vim:foldlevel=2
