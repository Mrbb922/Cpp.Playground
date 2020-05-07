/*

        Driving is expensive. Write a program with a car's miles/gallon and gas dollars/gallon (both doubles) as input,
        and output the gas cost for 10 miles, 50 miles, and 400 miles.

        Output each floating-point value with two digits after the decimal point, which can be achieved by executing
        cout << fixed << setprecision(2); once before all other cout statements. 

        NOTE: This lab could have been done by creating a function to pass arguments and been better. But the "ZyBooks" 
        has a certain way they want each assignment to be done (mainly to stay inside of the scope of the material 
        that has been taught thus far). Also, even though the instructions do not state to end with a "newline", one
        must be added to obtain 100% on the lab.

*/

#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

   /* Type your code here. */
   
   double mileGallon;
   double dollarsGallon;   
   
   cin >> mileGallon;
   cin >> dollarsGallon;
   
   cout << fixed << setprecision(2) << (10.0 / mileGallon) * dollarsGallon << " "; // space between each output
   cout << fixed << setprecision(2) << (50.0 / mileGallon) * dollarsGallon << " "; // space between each output
   cout << fixed << setprecision(2) << (400.0 / mileGallon) * dollarsGallon << endl; // must add newline for 100%
   
   /* End Solution */

   return 0;
}
