/*

      Write a function PrintShampooInstructions(), with int parameter numCycles, and void return type. 
      If numCycles is less than 1, print "Too few.". If more than 4, print "Too many.". 
      Else, print "N: Lather and rinse." numCycles times, where N is the cycle number, followed by "Done.". End with a newline

*/

#include <iostream>
using namespace std;

/* Your solution goes here  */

void PrintShampooInstructions(int cycles) {
   int i;
   
   if (cycles < 1) {
      cout << "Too few." << endl;
   }
   else if (cycles > 4) {
      cout << "Too many." << endl;
   }
   else {
      for (i = 0; i < cycles; ++i) {
      cout << i + 1 << ": Lather and rinse." << endl;
      }
   cout << "Done." << endl;
   }
}

/* End solution */   

int main() {
   int userCycles;

   cin >> userCycles;
   PrintShampooInstructions(userCycles);

   return 0;
}
