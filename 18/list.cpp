#include <iostream>
using std::cin;
using std::cout;
using std::endl;


/*TODO: try to write a program that reads all integers from stdin
	 * into a list.  IDEA: insert each new node at the beginning, using*/
   //TODO: output list to stdout
struct node {
	int data;
	node* next;
};



int main() {

  node* L = NULL;

  int x;

  while(cin >> x ) {

    //1. make a new node. it will also have a pointer p.
   node*p = new node;

    //2. copy the inputted value into the data slot of that new node.
    p->data = x;

    //3. Point that new node to the first (empty?) node of the list.
    p->next = L;

    //4. point the original node pointer L to point to the new node which will have the most current read integer.
    L = p;


  }

    //Now output the numbers from the list. Have another pointer that points to each node and progresses after printing out the data
cout << endl;
  node* i = L; // points to the very first node by default.

  while(i!=NULL) { // when it reaches null the program stops because "NULL" marks the end of the loop because no integer doesnt exist there as the pointer would be essentially pointing to nothing.


   cout << i->data << endl; // prints the data value from the node.


   i = i->next; //pointer i now points to the next node in the list.

  }

  return 0;

}