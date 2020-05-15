/*

      Set hasDigit to true if the 3-character passCode contains a digit.
      
      *Note: This could of been done easier using a for loop and indexing through "passCodes" 
      indicies. But the assignment required to stay in scope of the material. 

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   bool hasDigit;
   string passCode;

   hasDigit = false;
   cin >> passCode;

   /* Your solution goes here  */
   
   if (isdigit(passCode.at(0))) {
      hasDigit = true;
   }
   
   if (isdigit(passCode.at(1))) {
      hasDigit = true;
   }
   
   if (isdigit(passCode.at(2))) {
      hasDigit = true;
   }
   
   /* End Solution */

   if (hasDigit) {
      cout << "Has a digit." << endl;
   }
   else {
      cout << "Has no digit." << endl;
   }

   return 0;
}
