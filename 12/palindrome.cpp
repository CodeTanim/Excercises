#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;
using std::endl;


/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */


bool palindrome(string &s1, string &s2) {

  size_t  d = s1.length();

  size_t j;
  for ( size_t i = 0; i < d; i++) {

    for ( j = 0; j < d; j++) {

      if(s1[i+j] != s2[d-1-j])
        break;

      }

      // this basically says if the above never happens which is the loop never breaking, then that means a match was found with the reverse iteration because thats the only way j = the size of s1 length. It means it got up to that iteration without breaking so it is a palindrome.
      if( j == d)
        return true;

    }


  return false;

  }






int main () {

  string s1;
  string s2;

  cout << "Enter a word and we will check if it is a palindrome: " << endl;
  cin >> s1;

  //makes a copy of the inputted string word and puts it inside s2.
  s2 = s1;

  if(palindrome(s1,s2)) {

    cout << "Yes, " << s1 << " is a palindrome." << endl;

  }
else {

  cout << "No, " << s1 << " is not a palindrome." << endl;


}


return 0;

}