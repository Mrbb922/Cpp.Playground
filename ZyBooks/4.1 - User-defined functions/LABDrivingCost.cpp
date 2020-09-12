#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

/* Define your function here */ 

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {   
   double totalCost;   
   totalCost = (drivenMiles / milesPerGallon) * dollarsPerGallon;   
   cout << fixed << setprecision(2);
   return totalCost;
}

void DrivingCost(double mpg, double dpg) {
   cout << fixed << setprecision(2) << (10.0 / mpg) * dpg << " "; 
   cout << fixed << setprecision(2) << (50.0 / mpg) * dpg << " "; 
   cout << fixed << setprecision(2) << (400.0 / mpg) * dpg << endl;
}

/* End function */
   
int main() {
   /* Type your code here */
   
   //double miles;
   double mpg;
   double dpg;
   
   //cin >> miles;
   cin >> mpg;
   cin >> dpg;
   
   DrivingCost(10.0, mpg, dpg);
   DrivingCost(50.0, mpg, dpg);
   DrivingCost(400.0, mpg, dpg);
   DrivingCost(mpg, dpg);

   return 0;
   
   /* End code */
}
