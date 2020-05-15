/*

      Write an expression to detect that the first character of userInput matches firstLetter. 

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   char firstLetter;

   getline(cin, userInput);
   cin >> firstLetter;
   
   /* Your solution goes here */
   
   if (userInput.at(0) == firstLetter) {
      cout << "Found match: " << firstLetter << endl;
   }
   else {
      cout << "No match: " << firstLetter << endl;
   }
   
   /* End Solution */

   return 0;
}
