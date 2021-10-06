#include <iostream>
using std::cout;
using std:: endl;


// Program needs to count words inputted

int main() {


  size_t count = 0;

  int token = 0; // when token = 0, it means its on a blank or a non character.
  char c;


  while(scanf("%c",&c) > 0) {



    if(token == 0 && c != ' ' && c != '\t' && c!= '\n') { // if token is on a blank

      // and then if it satisifies these conditions, then that means its the start of a new word, so u count up. and ur token becomes 1 which means a character/word is being read.

        count ++;
        token = 1;
      }



      else if (token == 1 && (c == ' ' || c == '\t' || c == '\n')) { // when the token is 1, meaning it is at a readable character then check if the character ur on currently satisifies the condition above, which are bascially non characters of words and so if true token becomes 0 again.



        token = 0;

        }

      }


cout << "The number of words are: " << endl;
    cout << count << endl;


      return 0;

  }