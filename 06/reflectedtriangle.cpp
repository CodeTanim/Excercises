#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::size_t;
int main() {

//idea spaces start at n-1 = max decrease to zero, while stars start minimum of 1 and increase to n inputted. use endl; to go to the next line.


size_t i,j,k;
  size_t rows;
	cin >> rows; // inputs number of rows

for ( i = 0; i <rows; i++) {
	// outer loop sets parameters for the contents in the inner loop. this will keep going until parameter "i" meets the user inputted number of rows.



	for ( j = i; j<rows; j++) {
		cout << " " ;
		// since everything is printed ( and written in real life) from left to right, the first thing that needs to happen are the spaces. the spaces will keep decreasing by increments of one for each row

	}
	for ( k = 1; k <=i; k++){
		cout << "*";
		// The very first row has at least one star
		// the stars keep increasing by one for each subsequent row until it matches the number of rows inputted




	}
	cout << endl; // after the outerloop meets the max of parameters, it goes on to next line and repeats. For example, say 5 is the number of rows inputted, it will print 4 spaces since j <rows, then it will go on to print the star in the next loop, starting with only 1, and then going to each line until it fills out all 5.

	// after going through the motion of the inner loops once, u move on to the next line and so on and on.
}



  return 0;

}
		  // *
//     * *
//   * * *
// * * * *