/*

      Assign the size of userInput to stringSize. Ex: if userInput is "Hello", output is: 
      Size of userInput: 5

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   int stringSize;

   getline(cin, userInput);

   /* Your solution goes here  */
   
   stringSize = userInput.size();
   
   /* End Solution */

   cout << "Size of userInput: " << stringSize << endl;

   return 0;
}
