
/* TODO: write a program that reads (arbitrarily many) integers from
 * stdin and outputs the *second* smallest one.  NOTE: you don't need
 * to store many numbers (all at once, that is) to do this!  You'll
 * only need a few integer variables.  Think about invariants!
 * Perhaps write this in a new file. */
 #include <iostream>
 #include <climits>
 using std::cout;
 using std::endl;
 using std::cin;

 int main() {

   int i, green, blue,red;

   blue = INT_MAX;
   red = INT_MIN;
   i = 0;

   while (cin >> green) {


     if ( green > red){
       red = green;  // Absolute max from list


     }


   if(green < blue) {

     blue = green; // Absolute min from list

   }


     if(green != red  && green  > blue) {

       red = green;



     }




 }



   cout << "The second min is " << red << endl;

   return 0;

 }





