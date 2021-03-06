/*

    Write a function so that the main() code below can be replaced by the simpler code that calls function MphAndMinutesToMiles(). Original main():
    
    int main() {
   double milesPerHour;
   double minutesTraveled;
   double hoursTraveled;
   double milesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   hoursTraveled = minutesTraveled / 60.0;
   milesTraveled = hoursTraveled * milesPerHour;

   cout << "Miles: " << milesTraveled << endl;

   return 0;
}

*/

#include <iostream>
using namespace std;

/* Your solution goes here  */

double MphAndMinutesToMiles(double mph, double min) {
   double hours = min / 60.0;
   double miles = hours * mph;
   
   return miles;   
}

/* End solution */

int main() {
   double milesPerHour;
   double minutesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}
