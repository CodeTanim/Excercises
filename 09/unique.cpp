#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::size_t;
using namespace std;

// idea is to get rid of duplicates in a vector and only print unique numbers.

// sort in ascending order, then do your old code


size_t indexOfSmallest(vector<int>& V, size_t& start) {

  size_t iMin = start;

  for (size_t i = start +1; i < V.size(); i++) {

    if( V[i] < V[iMin]) {

      iMin = i;
    }
  }
  return iMin;

}




void sort(vector<int> &V) {



  for (size_t i = 0; i < V.size()-1; i++) {

    size_t n = indexOfSmallest(V,i);

    swap(V[i],V[n]);

  }
}


void unique(vector<int>& V, vector <int>& W) {


size_t n = V.size();



for(size_t i = 0; i < n; i++) {

        if(V[i] != V[1+i]) {



      W.push_back(V[i]);


        }
    }

  }








int main() {


  int x;
  vector<int> V;
vector <int> W;
vector <int> Z;

  while (cin >> x) {

    V.push_back(x);
  }

  // put function to sort here

  sort(V);

  // then function to print unique numbers

unique(V, W);


   cout << endl;


  cout << "The list without duplicates is: " << endl;

size_t d = W.size();


for ( size_t k = 0; k < d; k++ ) {

    cout << W[k] << endl;
  }


  return 0;
}



