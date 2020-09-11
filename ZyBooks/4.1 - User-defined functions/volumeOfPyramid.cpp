/*

    Define a function PyramidVolume with double parameters baseLength, baseWidth, and pyramidHeight, that returns as a double the volume of a pyramid with a rectangular base. 

*/

#include <iostream>
using namespace std;

/* Your solution goes here  */

double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight) {
   double area = baseLength * baseWidth;
   double volume = area * pyramidHeight * 1/3;
   return volume;
}

/* End solution */

int main() {
   double userLength;
   double userWidth;
   double userHeight;

   cin >> userLength;
   cin >> userWidth;
   cin >> userHeight;

   cout << "Volume: " << PyramidVolume(userLength, userWidth, userHeight) << endl;

   return 0;
}
