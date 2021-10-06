#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::endl;

/* TODO: modify the function in reverse.cpp so that in the case where
 * a solution is found, it also "returns" the pair of indexes
 * found to work.  (Use by reference params...)  Update the test
 * code in main accordingly. */
// Maybe modify to use the "return" instead of cout.
// The program still does work tho !

size_t subsetsum(vector<int>& V, int t)
{
	size_t n = V.size();
	for (size_t i = 0; i < n-1; i++) {
		for (size_t j = i+1; j < n; j++) {

       if (V[i] + V[j] != t) {

cout << "" << endl;


      }
      else {

        cout << endl;

        cout << "* " << i << endl;
        cout << "  " << j << endl;
      }


      }

		}

return 0;
	}






int main(){

  int x;
  vector<int> V;
  while(cin >>x) {

    V.push_back(x);

  }


cout << " The indexes for which the elements add up to 3 are : " << endl;

  subsetsum(V,3) ;





return 0;

}





