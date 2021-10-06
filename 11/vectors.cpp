#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* calling this function should add a new element x
 * to the FRONT of the vector (index 0), preserving the
 * order of all other elements. */
void push_front(vector<int>& V, int x)
{
	/* IDEA: increase size of V, say by pushing a "dummy"
	 * element to the back.  Then shift all elements to
	 * a higher index, leaving index 0 free to be overwritten. */
	V.push_back(13);
	/* now shift all elements "to the right" (higher indexes) */
	for (size_t i = V.size()-1; i > 0; i--) {
		V[i] = V[i-1];
	}
	/* finally, write x to front of vector (first element) */
	V[0] = x;
}
/* TODO: replace the boolean condition in the for loop with
 * i != -1 which actually introduces a subtle error: the last time
 * through the loop, we will reference index -1!  Then compile and
 * run with some test input.  To compile just run "make".  Most likely
 * your program will appear to work fine, in spite of the error!  Now
 * compile with debug flags enabled: use "make -B debug".  Run it again
 * and see what happens. */
/* TODO: write a "pop_front" function that removes the first element.
 * It should preserve the order of the other elements.
 * NOTE: if you don't care about preserving the order of elements, there
 * is a much more efficient way to remove the first element (or any other
 * element).  Can you see how?
 * */
/* TODO: write down that polynomial evaluation function from lecture
 * and test it out. */

int main()
{
	int x;
	vector<int> V;
	/* read stdin into V using our push_front function: */
	while (cin >> x) {
		push_front(V,x);
	}
	for (size_t i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
	}
	cout << "\n";
	return 0;
}

// vim:foldlevel=2
