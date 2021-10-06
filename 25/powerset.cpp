#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;

/* function to compute the power set (we are representing
 * sets as vectors...)  */
vector<vector<int>> powerset(const vector<int>& S)
{
	/* base case: empty set */
	if (S.size() == 0) { /* S == {} */
		return {{}};
	}
	/* now the general case: S is not empty.
	 * Plan: remove one element x from S to create S'.
	 * Then compute power set of S'.  S', along with
	 * a copy of S' where x is added to each subset
	 * will be the entire power set of S. */
	vector<int> Sp(S); /* S' = copy of S */
	int x = Sp[Sp.size()-1]; /* use last element for x */
	/* make Sp smaller by removing x: */
	Sp.pop_back(); /* removes last element */
	/* now Sp is smaller and we can use recursive magic... */
	vector<vector<int>> P = powerset(Sp);
	/* we assume this works, so P now has the set of all
	 * subsets of Sp. */
	size_t n = P.size();
	/* all that remains is to add the missing subsets. For
	 * this we need to add x to each set already in P. */
	for (size_t i = 0; i < n; i++) {
		/* TODO: do you get why we use n here and not P.size()? */
		vector<int> T = P[i];
		/* add x to T */
		T.push_back(x);
		/* add new set T to our answer */
		P.push_back(T);
	}
	return P;
}
/* TODO: try to write the above from scratch based on our lovely
 * pictures from lecture. */

int main()
{
	vector<int> S;
	int x;
	while (cin >> x) {
		S.push_back(x);
	}
	vector<vector<int>> P = powerset(S);
	// cout << "power set size: " << P.size() << "\n";
	cout << "{\n";
	for (size_t i = 0; i < P.size(); i++) {
		cout << "  {";
		for (size_t j = 0; j < P[i].size(); j++) {
			cout << " " << P[i][j];
		}
		cout << " }\n";
	}
	cout << "}\n";
	return 0;
}

/* TODO: try to write a similar recursive function that computes all
 * k-subsets of a set S.  That is, all the subsets with exactly k
 * elements.  You could of course just compute the entire power set
 * and then filter out anything with the wrong size, but don't!
 * Instead, try to make a more elegant algorithm that directly computes
 * what you want.  (This could be a huge savings in time when k is
 * relatively small, or relatively close to |S|.)
 * NOTE: I expect this to be a fairly challenging exercise.  Ask me
 * questions if you get stuck! */

// vim:foldlevel=2
