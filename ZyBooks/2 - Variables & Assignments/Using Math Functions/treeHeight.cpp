/*
   Simple geometry can compute the height of an object from the object's shadow length and shadow angle using 
   the formula: tan(angleElevation) = treeHeight / shadowLength. 
    1. Using simple algebra, rearrange that equation to solve for treeHeight. (Note: Don't forget tangent). 
    2. Complete the below code to compute treeHeight. For tangent, use the tan() function, described in the "math functions" link above. 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main( ) {
   double treeHeight;
   double shadowLength;
   double angleElevation;

   cin >> angleElevation;
   cin >> shadowLength;

   /* Your solution goes here  */
   
   treeHeight = shadowLength * tan(angleElevation);
   
   /* End Solution */

   cout << treeHeight << endl;

   return 0;
}
