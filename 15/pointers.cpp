/* NOTE: the following is based on a lecture from around this
 * time last year.  */
#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* dynamically allocate an int: */
	int* p = new int; /* this integer will NOT be on the runtime stack. */
	/* what is the 'new'??  The new operator does the following:
	 * 1. requests a block of memory (goes through libc; might involve a syscall).
	 * 2. marks the memory as being in use by your program.
	 * 3. gives you a pointer to the newly allocated block of memory.
	 * */
	/* store 17 in it: */
	*p = 17;
	/* give it a more convenient name if you want: */
	int& x = *p; /* this is called *aliasing* */
	printf("x == %i\n",x);
	int A[10];
	cout << A << "\n";
	/* once you're done with dynamically allocated memory, give it back to the
	 * system using delete: */
	delete p;
	/* NOTE: when your program ends, all memory resources are freed, but it is
	 * good practice to delete whatever you allocate. */
	return 0;
	/* TODO: understand why you can't resize a static array like A above. */
	/* TODO: make sure you have a clear model (in pictures) of what the
	 * above code is doing.  See l4.pdf for help if needed.  */
}

/* TODO: check out the new pointer exercises in ../whatstheoutput/ */

// vim:foldlevel=2
