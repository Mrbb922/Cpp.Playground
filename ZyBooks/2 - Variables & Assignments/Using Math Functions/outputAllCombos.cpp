/*

        Output all combinations of character variables a, b, and c. If a = 'x', b = 'y', and c = 'z', then the output is: 
        xyz xzy yxz yzx zxy zyx
        Your code will be tested in three different programs, with a, b, c assigned with 'x', 'y', 'z', then with '#', '$', '%', 
        then with '1', '2', '3'. 

*/

#include <iostream>
using namespace std;

int main() {
   char a;
   char b;
   char c;

   cin >> a;
   cin >> b;
   cin >> c;

   /* Your solution goes here  */
   
   /*
      This could be done by iterating over combinations with a loop, but the exercise in "ZyBooks" wanted it like this
   */
   
   cout << a << b << c << " ";
   cout << a << c << b << " ";
   cout << b << a << c << " ";
   cout << b << c << a << " ";
   cout << c << a << b << " ";
   cout << c << b << a;
   
   /* End Solution */

   cout << endl;

   return 0;
}
