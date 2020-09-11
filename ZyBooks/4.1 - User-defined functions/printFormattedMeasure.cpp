/*

  Define a function PrintFeetInchShort, with int parameters numFeet and numInches, that prints using ' and " shorthand. End with a newline.

*/

#include <iostream>
using namespace std;

/* Your solution goes here  */

void PrintFeetInchShort(int numFeet, int numInches) {
   cout << numFeet << "\' " << numInches << "\"" << endl;
}

/* End solution */

int main() {
   int userFeet;
   int userInches;

   cin >> userFeet;
   cin >> userInches;

   PrintFeetInchShort(userFeet, userInches);  // Will be run with (5, 8), then (4, 11)

   return 0;
}
