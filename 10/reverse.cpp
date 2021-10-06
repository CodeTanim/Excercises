
#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* NOTE: you can write a swap function without using a temporary
 * variable.  It just requires a bit of arithemtic cleverness.
 * If you're bored, try to figure out how. */
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

/* NOTE: the const by reference pattern: we can use it to
 * get the best of both worlds: efficiency of by reference
 * (since we don't have to copy) and a guarantee that V
 * will not be changed by the funcion. */
bool subsetsum(const vector<int>& V, int t)
{
	size_t n = V.size();
	for (size_t i = 0; i < n-1; i++) {
		for (size_t j = i+1; j < n; j++) {
			if (V[i] + V[j] == t)


			return true;


		}
	}
	/* if we ever make it down here, we know that the
	 * target was never found. */
	return false;
}
/* NOTE: the above takes approximately n^2/2 steps (corresponding
 * to the number of pairs we examine in the loops).  Can you see
 * a more efficient way to solve this problem if the input vector
 * was in sorted order? */
/* TODO: modify the above function so that in the case where
 * a solution is found, it also "returns" the pair of indexes
 * found to work.  (Use by reference params...)  Update the test
 * code in main accordingly. */

/* function to reverse vector contents: */
void reverse(vector<int>& T)
{
	size_t n = T.size();
	for (size_t i = 0; i < n/2; i++) {
		swap(T[i],T[n-1-i]);
	}
}

int main()
{
	int x;
	vector<int> T;
	while (cin >> x) {
		T.push_back(x);
	}
	reverse(T);
	/* now T's elements are in reverse order.  Let's check: */
	for (size_t i = 0; i < T.size(); i++) {
		cout << T[i] << " ";
	}
	cout << "\n";
	if (subsetsum(T,3))

	cout << "found 3 as a sum of 2 elements.\n";
	return 0;
}

/* TODO: write a function called "push_front(V,x)" for a vector, which
 * adds parameter x to index 0 of vector V by moving all the other values
 * to higher indexes.  (This should show you why inserting elements is only
 * efficient at the *end* of a vector.) */
/* TODO: if you haven't already, look at the many exercises from last time
 * in ../09/vectors.cpp */

// vim:foldlevel=2
