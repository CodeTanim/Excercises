#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <assert.h>

size_t fibmemo(size_t n) {

  static vector<size_t> A = {1,1};

  /*if(i < 2) {

    return 1;
  }*/

  if( n < A.size() ) {

    return A[n];

  }

else {
  //A.size() == n;

  size_t answer = fibmemo(n-1) + fibmemo(n-2);

  assert(A.size() == n);

  A.push_back(answer);


  return answer;

}



}

int main() {


  for (size_t n = 0; n < 50; n++ ) {



    cout << fibmemo(n) << endl;

  }




  return 0;

}