#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/* TODO: use the resize function to read all of stdin into array A.
	 * Double the size when you run out of space. */

// break this up into function form and then a driver code in the main.


int main() {

  int size = 10; // holds an arbitrary max size

  int* A = new int[size];

  int sizecount = 0; // will count a new size when numbers are being inputted in the array.


  while(cin >> A[sizecount]) {

    sizecount ++; //keep increasing the size.

    if(sizecount >= size) { // u run out of space or are about to run out of space. it will double once it equals the max size, so it makes sure that in the next input ur guranteed to have space for that new input.

      size = size*2; // makes the old size bigger, should the sizecounter ever equal or be greater than that old size.

      int * B = new int[size]; // creates a new array with twice the size of the old array that has pointer B pointing to it.

      for(int i = 0; i < sizecount; i++ ) {

        B[i] = A[i]; // copying all the contents from the old array into the new bigger array.

      }

      delete [] A; // once the copying is done, the memory of the old array is not needed anymore so you delete it.

      A = B; // you also make the pointer A point to the new bigger array denoted by B since old array A doesnt exist anymore.

    }



  }

  cout << endl;
  //now you just display the array with new size.

  for(int j = 0; j < sizecount; j++ ) {

    cout << *(A+j) << endl; // This is how you access the values of a pointer array.

  }

  return 0;
}