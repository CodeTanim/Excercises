#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;
using std:: endl;

/* TODO: modify the above to return the *index* where the match
 * was found, or -1 if no match was found.  (This is the way the
 * string's built-in substring function works.) */

bool substr(string &s1, string &s2) {

size_t n = s1.length();

size_t d = s2.length();

//s1  = aabbccd
//s2 = bbc

  for (size_t i = 0; i <= n-d; i++) {

   bool match = true;

    size_t j;


    for(j = 0; j < d; j++) {
//
      if (s1[i+j] != s2[j]) {

        match = false;
            break;
      }
//
    }


    if (match)

    return true;


  }

  return false;




}




int main() {

  string s1  = "aabbcc";
  string s2 = "abc";


  if (substr(s1,s2)) {

    cout << "Yes s2 is a substring of s1" << endl;
  }

  else{

  cout << "No s2 is not a substring of s1" << endl;
  }


return 0;



}