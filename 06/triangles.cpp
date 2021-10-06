#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int n;
	cin >> n;
	/* enumerate space of possibilities: we will consider
	 * all triples (i,j,k) with 0 < i < j < k <=n (make sure
	 * you understand why we don't need to consider equality).
	 * NOTE: by going through the possibilities in this way we
	 * avoid "duplicates" arising from permutations of the sides.
	 * E.g., (3,4,5) is really the same as (4,3,5)... */
	for (int i = 1; i <= n; i++) {
		for (int j = i+1; j <= n; j++) {
				// printf("(%d,%d) ",i,j);
			for (int k = j+1; k <= n; k++) {
				/* now apply test! */
				if (i*i + j*j == k*k) {
					printf("(%d,%d,%d)\n",i,j,k);
				}
			}
		}
	}
	return 0;
}

/* TODO: modify this program (or write a new one) so that the
 * input n describes an upper bound on the *perimeter* of the
 * triangle instead of the side length. */

// vim:foldlevel=2
