/*

      Replace any alphabetic character with '_' in 2-character string passCode. Ex: If passCode is "9a", output is: 

      9_

      Hint: Use two if statements to check each of the two characters in the string, using isalpha(). 
      
      *NOTE: This could have been done easier with using a for loop and indexing through "passCode". But the 
      assignment required to stay in the scope of the material. 

*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string passCode;

   cin >> passCode;

   /* Your solution goes here  */
   
   if (isalpha(passCode.at(0))) {
      passCode.at(0) = '_';
   }
   
   if (isalpha(passCode.at(1))) {
      passCode.at(1) = '_';
   }
   
   /* End Solution */

   cout << passCode << endl;
   return 0;
}

