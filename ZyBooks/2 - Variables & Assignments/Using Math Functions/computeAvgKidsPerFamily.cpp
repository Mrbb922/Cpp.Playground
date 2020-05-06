/*

Compute the average kids per family. Note that the integers should be type cast to doubles. 

*/

#include <iostream>
using namespace std;

int main() {
   int numKidsA;
   int numKidsB;
   int numKidsC;
   int numFamilies;
   double avgKids;

   cin >> numKidsA;
   cin >> numKidsB;
   cin >> numKidsC;
   cin >> numFamilies;

   /* Your solution goes here  */
   
   avgKids = (static_cast<double>(numKidsA) + numKidsB + numKidsC) / numFamilies; // Only need to cast one variable to double
   
   /* End Solution */

   cout << avgKids << endl;

   return 0;
}
