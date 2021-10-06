#include <iostream>
#include <vector>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::size_t;
using namespace std;


size_t indexOfSmallest(vector<int>& V, size_t& start) {

  size_t iMin = start;

  for (size_t i = start + 1; i < V.size(); i++) {

    if( V[i] < V[iMin]) {

      iMin = i;
    }
  }
  return iMin;

}



void sort(vector<int> &V) {



  for (size_t i = 0; i < V.size() - 1; i++) {

    size_t n = indexOfSmallest(V,i);

    swap(V[i],V[n]);

  }
}



int main() {

  vector<int> V;
  vector<int> W;

int x;
  while(cin >> x) {

    V.push_back(x);

  }

  cout << endl;



sort(V);







for ( size_t k = 0; k < V.size(); k++) {



cout << V[k] <<endl;


}








  return 0;
}