#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <getopt.h> // to parse long arguments.
#include <string>
using std::string;


struct node{

  string data;

  node* next;
  node* prev;


};

int main() {

string s, s1;

getline(cin,s);

node* L = new node;

L->data = s;

L->prev = NULL;
L->next = NULL;


getline(cin,s1);

if(s1 <= L->data) {

       node* p = new node;

          p->data = s1;

         p->next = L;
           p->prev = NULL;

         L->prev = p;

            L = p;
}






cout << endl;
node* i = L;
while(i!=NULL) {

cout << i->data << endl;

  i = i->next;




}

return 0;

}









