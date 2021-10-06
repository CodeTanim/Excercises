#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::size_t;

// takes list of numbers and returns only the even numbers from that list

void even(vector<int>& E) { //void does not return anything. might be my favourite function type.

    size_t n = E.size();
  for (size_t i = 0; i < n; i++) { // the upperbound is set as E.size() which can vary depending on how many numbers the user decided to input. it is crucial, that we dont go over the bound.
    cout << E[i] << endl;

  }
}



int main()

{

  int x;
  vector <int> E;



  while(cin >> x) {

if ( x % 2 == 0) { // if the number is even, it will have no remainder when divided by 2

  E.push_back(x); //stores all even numbers in the vector E



}



}

cout << endl;

cout << "The even numbers are: " << endl;


even(E);

return 0;

}









