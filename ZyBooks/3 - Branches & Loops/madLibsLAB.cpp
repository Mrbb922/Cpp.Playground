/*

Mad Libs are activities that have a person provide various words, which are then used to
complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and integer as input, and outputs a sentence using
those items as below. The program repeats until the input is quit 0.

Ex: If input is:
apples 5
shoes 2
quit 0

Out put would be:
Eating 5 apples a day will keep the doctor away.
Eating 2 shoes a day will keep the doctor away.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {

   /* Type your code here. */
   
   string userString;
   int userNum;
   
   cin >> userString;
   cin >> userNum;
   
   while ((userString != "quit") && (userNum != 0)) {
      cout << "Eating " << userNum << " " << userString << " a day keeps the doctor away." << endl;
      cin >> userString;
      cin >> userNum;
   }
   
   /* End Solution */

   return 0;
}
