#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

/* TODO: try to write a function to perform polynomial evaluation
 * that uses Horner's Rule (see lecture notes if you need a reminder).
 * Make sure you add some code to main to test it.
 * */

/* function to check if s2 appears as a substring in s1
 * (like ctrl-f, or / for searching) */
bool substr(const string& s1, const string& s2)
{
	/* IDEA: check for a match at every possible starting
	 * point. */
	for (size_t i = 0; i <= s1.length()-s2.length(); i++) {
		/* check for match starting at i */
		size_t j; /* make scope of j larger! */
		for (j = 0; j < s2.length(); j++) {
			if (s1[i+j] != s2[j]) break;
		}
		/* why did the inner loop end?  This will tell us whether
		 * or not we found a match. */
		if (j == s2.length()) return true;
		// else, keep looking...
	}
	// once we get here, we know we didn't find a match...
	// we've looked at all the possible starting points and
	// never returned true above
	return false;
}
/* TODO: try to re-write this substr function from scratch. */
/* TODO: modify the above to return the *index* where the match
 * was found, or -1 if no match was found.  (This is the way the
 * string's built-in substring function works.) */

/* TODO: write the following function which converts all lower
 * case letters to upper case.  NOTE: there are library functions
 * that will convert a single character (see 'man 3 toupper'),
 * but it might be more instructive to do it without using those.
 * If doing it without the help of toupper, note that the offset
 * between lower/upper cases is simply 'A' - 'a' (remember, this
 * is a number...).
 * */
void YELL(string& s) {
	/* make all lower case chars upper case. */
}

/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */

int main()
{
	/* TODO: write something to test our new function! */
	string t = "bbc";
	string s;
	cin >> s;
	/* search for t as a substring of s: */
	if (substr(s,t)) {
		cout << "found " << t << " in " << s << "\n";
	} else {
		cout << t << " not found\n";
	}
	return 0;
}

// vim:foldlevel=2
