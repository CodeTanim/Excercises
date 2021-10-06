#include <iostream>
#include <vector>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
#include <string>
using std::string;

/* TODO: modify the above to return the *index* where the match
 * was found, or -1 if no match was found.  (This is the way the
 * string's built-in substring function works.) */
int substr(string &s1, string &s2) {

size_t n = s1.length();

size_t d = s2.length();

//s1  = aabbccd
//s2 = bbc

  for (size_t i = 0; i <= n-d; i++) {

   //int match = 1;

    size_t j;


    for(j = 0; j < d; j++)
//
      if (s1[i+j] != s2[j])
            break;

//

  //This defies what the above statement stands for because by j equaling the size of s2, that means the loop never broke as stated above. Basically says the jth iteration which only checks  up 3 slots of s1 in this case, if it fully happens then that means j eventually equaled the size of s2(d), which would basically mean yes the substring exists since it was able to go up to that term. So then, the corresponding starting ith term is the starting index of the string match.
       if(j == d)
      return i;


    }


return -1;

    }

int main() {

  string s1  = "aaabbccd";
  string s2 = "bbc";

int result = substr(s1,s2);

 if( result == -1) {

  cout << "No match was found" << endl;
 }

 else {

  cout << "The match starts at index: " << result << endl;

 }


return 0;



}