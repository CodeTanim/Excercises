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

size_t subsetsum(vector<int>& V, int t,size_t *index_1, size_t *index_2)
{
	size_t n = V.size();
	for (size_t i = 0; i < n-1; i++) {
		for (size_t j = i+1; j < n; j++) {

       if (V[i] + V[j] == t) {

          return i;
         return j;

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

  size_t q,r;




cout << "The pair of indexes for which the elements add up to 3 are in the vector are : " << endl;

 cout << subsetsum(V,3,&q,&r) << endl;



return 0;

}



