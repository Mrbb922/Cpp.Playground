/*

    Use function GetUserInfo to get a user's information.

*/

#include <iostream>
#include <string>
using namespace std;

void GetUserInfo(int& userAge, string& userName) {
   cout << "Enter your age: " << endl;
   cin >> userAge;
   cout << "Enter your name: " << endl;
   cin >> userName;
}

int main() {
   int userAge;
   string userName;

   /* Your solution goes here  */
   
   GetUserInfo(userAge, userName);
   
   /* End solution */

   cout << userName << " is " << userAge << " years old." << endl;

   return 0;
}
