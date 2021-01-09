#include <iostream>
using namespace std;

int main() {
   double piVal = 3.14159;
   double sphereVolume;
   double sphereRadius;

   cin >> sphereRadius;

   /* Your solution goes here  */
   sphereVolume = (4.0 / 3.0) * piVal * sphereRadius * sphereRadius * sphereRadius;

   cout << sphereVolume << endl;

   return 0;
}
