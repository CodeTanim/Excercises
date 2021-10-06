#include <iostream>
using std::cin;
using std::cout;

struct node {
	int data;
	node* next;
};

/* function to copy a list pointed to by L.  NOTE: the return
 * value should point to a *new* list with values that are
 * the same as those of L. */
node* copy(node* L)
{
	if (L == NULL) return L;
	/* NOTE: we can now assume L not empty! */
	node* p = L; /* pointer to next thing to be copied from L */
	node* C = new node; /* pointer to copy */
	node* q = C; /* pointer to last node that has been copied in C */
	q->data = p->data;
	p = p->next;
	/* at this point we have setup our variables to have the meanings
	 * we wanted (we have "established the invariants"). */
	/* now just take care of the generic case! */
	while (p != NULL) {
		q->next = new node;
		q = q->next;
		q->data = p->data;
		p = p->next;
	}
	/* last thing: make sure q->next is NULL at the end! */
	q->next = NULL;
	return C;
}

int main()
{
	node* L = NULL; /* pointer to beginning of list */
	int x; /* storage for new number from standard input */
	node* e = NULL; /* should point to last node in list */
	if (cin >> x) { /* add first node explicitly to L */
		L = new node;
		L->data = x;
		L->next = NULL;
		e = L;
	}
	/* NOTE: now our "generic" picture is true!  e is a pointer
	 * to the last node in the list. */
	/* now we can attach the rest of the new nodes to e */
	while (cin >> x) {
		e->next = new node;
		e = e->next; /* update e to again point to last */
		e->data = x;
		e->next = NULL;
	}
	node* C = copy(L);
	node* q = C; /* use q to go through copied list */
	while (q != NULL) {
		cout << q->data << " ";
		q = q->next;
	}
	cout << "\n";
	return 0;
}

/* TODO: maybe make the test of our copy function better:
 * After copying, go through L and add 10 to every node's value,
 * then print both lists back out. */
/* TODO: probably you haven't done all the list exercises from
 * past lectures yet...so go check those out.  Again, I highly
 * recommend the "reverse a list" exercise. */
/* TODO: If you manage to finish the project, start reading l5.pdf
 * (this covers our next (and last) big topic: recursion). */

// vim:foldlevel=2
