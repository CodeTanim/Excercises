/* NOTE: #include just reads the text of a file into this file
 * before compilation.  Look in /usr/include/c++/10.2/ if you want
 * to see the actual contents of iostream. (Replace 10.2 with your
 * compiler version if needed.)  */
#include <iostream>
using std::cout;
/* NOTE: some variables (ones that are declared in a "namespace")
 * have a first and last name.  You can use "::" to specify a
 * name completely: last-name::first-name.
 * Most of the stuff you are likely to #include in 103 will have
 * the last name "std".
 * NOTE: the above "using" statement says it's ok to just call
 * cout by its first name.  */
/* lazy method: put us on a first name basis with the entirety
 * of symbols in the STL: */
// using namespace std;

/* NOTE: the main program is the official "starting point"
 * for the program. */
int main()
{
	cout << "hello :D:D:D\n";
	/* NOTE: double quotes prevent the interpretation as variable
	 * names (see "literal expression" in the glossary).  You can use
	 * single quotes for single character literals (this distinction
	 * will be more clear later when we talk about arrays). */
	/* NOTE: the semicolon is like punctuation in written language;
	 * Think of it like the full stop ('.') in English.  You use it
	 * to delimit one statement from another. */
	/* TODO: remove the semicolon, try to compile, take note of the error
	 * message that will result. */
	return 0;
	/* NOTE: returning 0 from main specifies the *exit code*
	 * of the program.  This might be used by the program that
	 * ran our program.  Generally, 0 means "program worked"
	 * and anything else means "something went wrong".
	 * */
	/* TODO: see for yourself: test out the following shell command
	 * using different return codes:
	 * $ ./a.out && echo "it worked"
	 * You'll notice that "it worked" is only printed when you return 0.
	 * (The "&&" in the shell means "run first program, and IF IT WORKED,
	 * run the second program afterward".)
	 * */
	/* NOTE: the return statement also ends the main function, and thus
	 * our program.  Hence anything afterward will not be executed: */
	cout << "too late T.T\n";
}

/* TODO: follow the tutorial on "building on the command line" from our
 * homepage.  Then just spend some time experimenting and see what you
 * can learn.  */

// vim:foldlevel=2
