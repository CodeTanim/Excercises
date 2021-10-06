#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <getopt.h> // to parse long arguments.
#include <string>
using std::string;

// this is the while loop when the tail ends fail and result in segmentation fault error.
 /* while(i->next!= NULL) {



     if(i->data == j->data) {

      node* p = j;

      i->next = j->next;

      j->next->prev = i;


       delete p; */






struct node{

  string data;

  node* next;
  node*prev;


};



void removeduplicates(node*&head) {

  node * i = head;
  node * j = head->next;

while(i->next !=NULL) {

  //head case

  if( head->data == head->next->data ) {

    node * p = head;

    head->next->prev = NULL;

    head = head->next;

    delete p;

 j = j->next;
    i = i->next;

    continue;


  }
//middle case
  if(i->data == j->data) {

    node* p = i;

    i->prev->next = j;

    j->prev = i->prev;

    delete p;



  }


  else {

    j = j->next;
    i = i->next;


  }

}


}















int main() {




	string s,s1,s2;

	getline(cin,s);

	node* head = new node;

  head->data = s;
	head->next = NULL;
	head->prev = NULL;

  getline(cin,s1);

  node* e = new node;

  e->data = s1;

if(e->data <= head->data) {

  e->next = head;

  e->prev = NULL;

  head->prev = e;

  head = e;


}

else {


  e->prev = head;

  e->next = NULL;

  head->next = e;


}


while(getline(cin,s2)) {
//need a pointer whose job is to just point and check the data in each node. It should start by pointing to the beginning of the list.


   if(s2 <= head->data) {

     node* newnode = new node;

     newnode->data = s2;

     head->prev = newnode;

     newnode->next = head;

			 head = newnode;

   }

   else {

    node* temp = head->next;

   while(temp!= NULL) {

     if( s2 <=  temp->data ) {


       node* newnode = new node;

     newnode->data = s2;

		temp->prev->next = newnode;

    newnode->prev = temp->prev;

       temp->prev = newnode;

       newnode->next = temp;


       break;

     }

     else if (temp->next == NULL) {

       node* newnode = new node;

       newnode->data = s2;

       temp->next = newnode;

       newnode->prev = temp;

       break;

     }

     temp = temp->next;


   }

 }


}



removeduplicates(head);


node* i = head;

cout << endl;
while(i!=NULL) {

  cout << i->data << endl;

  i = i->next;


}




return 0;
}