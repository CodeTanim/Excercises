#include <iostream>
#include<cstring>
using std::cout;
using std::string;
using std::endl;
using std::cin;




int main() {


string s2, s1;

  getline(cin,s1);

  getline(cin,s2);

  if(s1 < s2) {

    cout << s1 << endl;

  }

  else if (s1>s2){

    cout << s2<<endl;

  }





  return 0;


}