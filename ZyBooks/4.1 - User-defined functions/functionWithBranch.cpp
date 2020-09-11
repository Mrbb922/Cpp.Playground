/*

    Complete function PrintPopcornTime(), with int parameter bagOunces, and void return type. 
    If bagOunces is less than 2, print "Too small". If greater than 10, print "Too large". 
    Otherwise, compute and print 6 * bagOunces followed by " seconds". End with a newline.

*/

#include <iostream>
using namespace std;

void PrintPopcornTime(int bagOunces) {

   /* Your solution goes here  */
   
   if (bagOunces < 2) {
      cout << "Too small" << endl;
   }
   else if (bagOunces > 10) {
      cout << "Too large" << endl;
   }
   else {
      cout << bagOunces * 6 << " seconds" << endl;
   }
   
   /* End solution */

}

int main() {
   int userOunces;

   cin >> userOunces;
   PrintPopcornTime(userOunces);

   return 0;
}
