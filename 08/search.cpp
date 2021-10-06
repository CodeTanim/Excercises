#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int search( int x) {

  vector<int> V = { 1,2,3,4,5,6,7,23,65};



 string status = " No there isnt a number";
  for ( size_t i = 0; i < V.size(); i++) {

if ( V[i] == x) {

status = " Yes there is a number";

}


}

cout << status <<endl;

return 0;
}

int main ()
{

  vector<int> V;
int x;
cin >> x;
  search(x);





  return 0;
}






