#include <iostream>
using std::cin;
using std::cout;
using std::endl;



/*TODO: try to write a program that reads all integers from stdin
	  into a list.  IDEA: insert each new node at the beginning, using

TODO: output list to stdout

TODO: Now preserve the order of the original input. Need to modify the main. */


struct node {
	int data;
	node* next;
};



int main() {

  node* L = NULL;

 int x;

 cin >> x;
//This is the construction of the first node with a data value of the first inputted integer 'x'.
 L = new node;

 L->data = x;

 L->next = NULL;


//Now you create another pointer which will first point to the same thing as L or in other words the node created above.
 node* e = L;



  while(cin >> x ) {

   // So Now you shift e around. First by pointing to a new node that you made on the heap.
   e->next = new node;

   // Then you have only the pointer 'e' point to this new node, which is something e->next is already pointing to because of the above assignment.
   e = e->next;

   //You fill the data slot with your inputted x value.
   e->data = x;

   // Then you proceed to make it point to nowhere (NULL) until you input another number x.
   e->next = NULL;

  }

    //Now output the numbers from the list. Have another pointer that points to the very first node and progresses after printing out the data.
cout << endl;

  node* i = L; // Points to the very first node by default.

  while(i!=NULL) { // when it reaches null the program stops because "NULL" marks the end of the loop because no integer exists there as the pointer would be essentially pointing to nothing.


   cout << i->data << endl; // prints the value from the data slot of the node.


   i = i->next; //pointer i now points to the next node in the list.

  }

  return 0;

}