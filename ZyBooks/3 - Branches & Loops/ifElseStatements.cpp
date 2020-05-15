/*

      Assignment is two parts. I will split each part by "----" for readability.
      
*/

// Part One

/*

      Write multiple if statements:
      If carYear is before 1968, print "Probably has few safety features." (without quotes).
      If after 1971, print "Probably has seat belts.".
      If after 1992, print "Probably has anti-lock brakes.".
      If after 2001, print "Probably has tire-pressure monitor.".
      End each phrase with period and newline. Ex: carYear = 1995 prints:

      Probably has seat belts.
      Probably has anti-lock brakes.

*/

#include <iostream>
using namespace std;

int main() {
   int carYear;

   cin >> carYear;

   /* Your code goes here */
   
   if (carYear < 1968) {
      cout << "Probably has few safety features." << endl;
   }
   
   if (carYear > 1971) {
      cout << "Probably has seat belts." << endl;
   }
   
   if (carYear > 1992) {
      cout << "Probably has anti-lock brakes." << endl;
   }
   
   if (carYear > 2001) {
      cout << "Probably has tire-pressure monitor." << endl;
   }
   
   /* End Solution */

   return 0;
}

// ----------------------------------------------------------------------

// Part 2

/*

      Print "userNum1 is negative." if userNum1 is less than 0. End with newline.
      Assign userNum2 with 4 if userNum2 is greater than 14. Otherwise, print 
      "userNum2 is less or equal 14.". End with newline.

*/

#include <iostream>
using namespace std;

int main() {
   int userNum1;
   int userNum2;

   cin >> userNum1;
   cin >> userNum2;

   /* Your code goes here */
   
   if (userNum1 < 0) {
      cout << "userNum1 is negative." << endl;
   }
   
   if (userNum2 > 14) {
      userNum2 = 4;
   }
   else {
      cout << "userNum2 is less or equal 14." << endl;
   }
   
   /* End Solution */

   cout << "userNum2 is " << userNum2 << endl;

   return 0;
}
