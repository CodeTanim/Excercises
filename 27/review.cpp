#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

struct node {
	int data;
	node* next;
};

node* divisibleby(node* L, int d)
{
	/* just filter out all nodes not divisble by d... */
	node R; /* "fake" node.  we won't use it's data
	           keeps track of beginning of list. */
	R.next = NULL;
	node* l = &R; /* attach new nodes to l->next */
	node* p = L; /* next node to be processed in L */
	while (p != NULL) {
		if (p->data % d == 0) {
			/* make a copy of *p; attach to end of result */
			l->next = new node;
			l = l->next;
			l->data = p->data;
		}
		p = p->next;
	}
	l->next = NULL;
	return R.next;
}

/* returns the exponent of 2 in the factorization of x */
int exp2(int x)
{
	int c = 0;
	while (x%2 == 0) {
		c++;
		x /= 2;
	}
	return c;
}

int main()
{
	int n;
	node L; /* fake first node -- data not used! */
	L.next = NULL;
	node* e = &L; /* pointer to last node. */
	while (cin >> n) {
		e->next = new node;
		e = e->next;
		e->data = n;
	}
	e->next = NULL;
	/* now our list is setup.  Filter it: */
	node* A = divisibleby(L.next,3);
	for (node* i = A; i != NULL; i = i->next) {
		cout << i->data << " ";
	}
	cout << "\n";
	return 0;
}

int main_old()
{
	int x; /* for input */
	vector<int> V; /* result to be printed */
	int maxexp = 0; /* maximal exponent found so far */
	while (cin >> x) {
		int c = exp2(x);
		if (c > maxexp) {
			V = {x};
			maxexp = c;
		}
		else if (c == maxexp) {
			V.push_back(x);
		}
	}
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
	return 0;
}

/* TODO: have a good summer :D */

// vim:foldlevel=2
