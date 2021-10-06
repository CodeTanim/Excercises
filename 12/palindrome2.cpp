#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;
using std::endl;


/* TODO: write a function that takes a string and returns a boolean
 * indicating whether or not it was a palindrome.
 * */

 //This is a simpler version of the palindrome function.
 //still does the job as the other palindrome program.




bool palindrome(string &s1, string &s2) {


size_t d = s1.size();

  bool match = true;

  for ( size_t i = 0; i < d; i++) {

    // checks the standard and reverse iteration of the characters in the input string. If they are all equal then boom it is a palindrome because by definiton, a palindrome word does not change when read or written in a reversed order
    if(s1[i] != s2[d-1-i])
      match = false;
          break;

  }

  return match;
}




int main () {

  string s1;
  string s2;

  cout << "Enter a word and we will check if it is a palindrome: " << endl;
  cin >> s1;

  // makes a copy of s1 and stores it in s2
  s2 = s1;

  if(palindrome(s1,s2)) {

    cout << "Yes, " << s1 << " is a palindrome." << endl;

  }
else {

  cout << "No, " << s1 << " is not a palindrome." << endl;


}


return 0;

}