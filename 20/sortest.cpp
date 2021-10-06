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
  node*prev;


};






int main() {




	string s,s1,s2;

	getline(cin,s);

	node* L = new node;

  L->data = s;
	L->next = NULL;
	L->prev = NULL;

  getline(cin,s1);

  node* e = new node;

  e->data = s1;

if(e->data <= L->data) {

  e->next = L;

  e->prev = NULL;

  L->prev = e;

  L = e;


}

else {


  e->prev = L;

  e->next = NULL;

  L->next = e;


}

node* p = L;

while(getline(cin,s2)) {
//need a pointer whose job is to just point and check the data in each node. It should start by pointing to the beginning of the list.


   if(s2 <= L->data) {

       node* q = new node;

     q->data = s2;

			 q->next = L;

			 L->prev = q;

			 L = q;

}

else if(s2 > L->data) {

  while(p!=NULL) {

  p = p->next;



if(s2 <= p->data) {

    node* q = new node;

    q->data = s2;
		q->next = p;
		q->prev = p->prev;

		p->prev = q;
		p->prev->next = q;

  break;

}






 else if (p->data < s2) {


    node * q = new node;

    q->data = s2;

    p->next = q;

    q->prev = p;

   // q->next = NULL;

    break;

    }


   }

  }

}









//Display
cout << endl;

node *i = L;

while(i!=NULL) {




	cout << i->data <<endl;

      i = i->next;


}


return 0;

}
