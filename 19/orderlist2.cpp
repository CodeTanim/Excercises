#include <iostream>
using std::cin;
using std::cout;
using std::endl;


//NOTE: This is not the correct version of preserving the correct order of the preserved list. The idea presented here used only one node pointer to progress the list but,you needed another pointer to be stationary. at the beginning of the list. Here the pointer at the begining of the list keeps inputting data into different nodes but at the end it only points to one node, the very last node, WHICH IS NOT WHAT WE WANT!





struct node {
	int data;
	node* next;
};



int main() {

  node* L = NULL;

 int x;

 cin >> x;
//This is the construction of the first node
 L = new node;

 L->data = x;

 L->next = NULL;


//Now you create another pointer which will first point to the same thing as L or in other words the node created above.
 /*node* e = NULL;

 e = L;*/

  while(cin >> x ) {

   // so Now you shift e around. First by pointing to a new node.
   L->next = new node;

   // Then you have only the pointer 'e' point to this new node.
   L = L->next;

   //you fill the data slot with your inputted x value.
   L->data = x;

   // then you proceed to make it point to nowhere until you input another number x.
   L->next = NULL;

  }

    //Now output the numbers from the list. Have another pointer that points to the first node and progresses after printing out the data
cout << endl;

  node* i = L; // Points to the very first node by default.

  while(i!=NULL) { // when it reaches null the program stops because "NULL" marks the end of the loop because no integer exists there as the pointer would be essentially pointing to nothing.


   cout << i->data << endl; // prints the value from the data slot of the node.


   i = i->next; //pointer i now points to the next node in the list.

  }

  return 0;

}