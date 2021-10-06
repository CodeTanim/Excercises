#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;
using std::endl;
#include<vector>
using std::vector;

/* TODO: write the following function which converts all lower
 * case letters to upper case.  NOTE: there are library functions
 * that will convert a single character (see 'man 3 toupper'),
 * but it might be more instructive to do it without using those.
 * If doing it without the help of toupper, note that the offset
 * between lower/upper cases is simply 'A' - 'a' (remember, this
 * is a number...).
 * */

void YELL(string &s1) {

  //ASCII values of lowercase a to z is ranged from 97 to 122
  // ASCII values of uppercase A to Z is ranged from 65 to 90
 // there is a difference of 32 between a letter's uppercase and lowercase counterpart
  size_t d = s1.size();


  for( size_t j = 0; j<d; j++ ) {

    if(s1[j] >= 97 && s1[j] <= 122)


    // If a letter within that ^ range is found, which also means if a lowercase letter is found, you substract 32 to get the corresponding upper case letter.
    s1[j] = s1[j]-32;


  }
}

int main()
{

string s1;


  cout << "Give me a word to yell for you: " << endl;


  cin >> s1;


YELL(s1);


cout << s1 << endl;


return 0;


}