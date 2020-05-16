/*

      Create a conditional expression that evaluates to string "negative" if userVal is less than 0,
      and "non-negative" otherwise. Ex: If userVal is -9, output is: 
      -9 is negative.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string condStr;
   int userVal;

   cin >> userVal;

   /* Your solution goes here */

   condStr = (userVal < 0) ? "negative" : "non-negative";
  
   /* End Solution */
   
   cout << userVal << " is " << condStr << "." << endl;

   return 0;
}
