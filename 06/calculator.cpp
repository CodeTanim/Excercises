#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//Basic calculator for addition, subtraction, division and multiplication.

int main ()

{

  double num1, num2;
  char op;

  cout << "Please type in an arithmetic expression with 2 numbers:  " << endl;

cin >> num1>> op >> num2;

switch (op) {   // Basically tells the thing that will be varying for each case. for this program, the main variant is the operators.

case '+':
cout << num1 + num2 << endl;
break; //BREAK is imporant

case '-':
  cout << num1 - num2 << endl;
break;

case '/':
  cout << num1/num2 << endl;
break;

case'*':
  cout << num1*num2 << endl;
break;

default : // when none of the cases are satisified. which in this case is dependent on the operator inputted. operator being in terms of a character.
  cout << "error! operator not recognized." << endl;

}

return 0;

}










