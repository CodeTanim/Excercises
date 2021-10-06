/* TODO: write a function called "max" that takes 3 integer
 * parameters and returns an integer value which is the largest
 * of the 3 inputs. */

 #include <iostream>
 #include <climits>
 using std::cout;
 using std::cin;
 using std::endl;



 int max(int green, int blue, int red, int& yellow) {



     if ( green > red && blue) {

       yellow = green;
     }

     if (blue > green && red) {

yellow = blue;
     }

     if ( red > green && blue) {

       yellow = red;

   }


return yellow;

 }





 int main() {

   int green,red,blue,yellow;

 cin >> green >> blue >> red;

   int M = max(green, blue, red, yellow);


   cout << "MAX IS " << M << endl;








   return 0;

 }