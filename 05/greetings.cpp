#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()

{

  int countdown;

  cout << "How many greetings do you want?"<< endl;
  cin>> countdown;

  while (countdown > 0) {

    cout << "Hello !" << endl;
    countdown--;

  }

  return 0;

}