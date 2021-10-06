#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
#include <assert.h>

/* slow version: */
int f(int n)
{
	if (n < 2) return 1;
	return f(n-1) + f(n-2);
}

/* memoized version.  Use a vector<int> to store a table
 * of answers: A[n] == answer for input n */
size_t fmemo(size_t n)
{
	/* table of answers, which will start out with just
	 * the base cases: */
	static vector<size_t> A = {1,1};
	/* NOTE: the static keyword in this context means that
	 * the variable is preserved across function calls!  In
	 * particular, note that we do NOT reset A to {1,1} each time
	 * this function is called.  We could have also made A global,
	 * but the static approach is more elegant (doesn't pollute
	 * global namespace with stuff that only fmemo cares about). */
	if (n < 2) return 1;
	if (n < A.size()) {
		/* we have a stored answer... use it! */
		return A[n];
	}
	size_t answer = fmemo(n-1) + fmemo(n-2);
	assert(A.size() == n); /* NOTE: this will end program if boolean
	                          is not true.  This one in particular
							  makes sure we are putting the answer in
							  the right place. */
	A.push_back(answer); /* so now A[n] = answer for n */
	return answer;
}

/* NOTE: I changed the types from int to size_t since fmemo can
 * efficiently compute the quite large terms that result.
 * But before I did, recall that there was a compiler warning
 * for the A.size() == n in the assert(...).  And recall that
 * the warning ONLY appeared when we ran `make debug`!  This
 * is because with -DNDEBUG given as a compiler flag, *the
 * assert is removed during preprocessing*!  And so it will
 * have no affect on performance.  It's as if you deleted
 * that line before compiling. */
/* TODO: add an assert(false) somewhere in main and see
 * what happens when you run the program.  Note that if
 * you don't compile with `make debug` (which undoes the
 * the -DNDEBUG) it will have no effect. */

int main(void)
{
	for (size_t i = 0; i < 50; i++) {
		// cout << "original: " << f(i) << "\n";
		/* warning: if you uncomment above, computer might
		 * melt. */
		cout << "memoized: " << fmemo(i) << "\n";
	}
	return 0;
}

/* TODO: keep reading l5.pdf.  It talks a bit about merge sort
 * which we will probably go over next class. */
/* TODO: try to write fmemo on your own without looking at
 * what we did. */

// vim:foldlevel=2
