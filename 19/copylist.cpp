#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//Make a function form of the copy feature.


struct node{

  int data;

  node* next;


};



int main() {


  //First make a list and read some integers into it. Lets preserve the order.


  node* L = NULL;

  int x;
  cin >> x;

  L = new node;
  L->data = x;

  L->next = NULL;

  node*p = L;


  while(cin >> x) {

    p->next = new node;

    p = p->next;

    p->data = x;

   p->next = NULL;


  }

  //Now copy that list into another set of nodes, say C.

// this is for the boundary case which is special because the list C technically doesnt exist yet, so for the first node you just do it normally, so it is easier for the while loop to keep on copying nodes from L, the original list.


  //First have the pointer i, point to the very first node of the list 'L'.
  node* i = L;

  // Then create a new node with the pointer C pointing to it.
  node *C = new node;

  //copy the data from what 'i' is pointing to (The first node), to the new node created and pointed by C.
  C->data = i->data;


  //Progress i to the next node of the list L.
  i = i->next;


  //Make a new pointer 'q' that is going to point to the last node copied.
  node*q= C;



  while(i!= NULL) {


    // the pointer q now will allocate a new node
    q->next = new node;


    // it will progress or point to that new node.
    q = q->next;

    // then have its blank data be overwritten by whatever is was pointing to which happens to be a node on the original list.
    q->data = i->data;

    //You progress the pointer of the original list
    i = i->next;



  }

  //print out the copy

  cout << endl;

  node* z = C;

  while(z!=NULL) {

    cout << z->data << " " ;


    z = z->next;
  }

  cout << endl;

  return 0;
}


