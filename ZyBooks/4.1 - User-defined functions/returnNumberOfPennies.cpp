/*

    Write a function NumberOfPennies() that returns the total number of pennies given a number of dollars and 
    (optionally) a number of pennies. Ex: 5 dollars and 6 pennies returns 506.

*/

#include <iostream>
using namespace std;

/* Your solution goes here  */

int NumberOfPennies(int dollars, int pennies = 0) {
   pennies = (dollars * 100) + pennies;
   
   return pennies;
}

/* End solution */

int main() {
   cout << NumberOfPennies(5, 6) << endl; // Should print 506
   cout << NumberOfPennies(4) << endl;    // Should print 400
   return 0;
}
