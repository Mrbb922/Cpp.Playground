/*

    Complete the function to replace any period by an exclamation point

*/

#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string& sentenceText) {

   /* Your solution goes here  */
   
   for (int i = 0; i < sentenceText.size(); ++i) {
      if (sentenceText.at(i) == '.') {
         sentenceText.at(i) = '!';
      }
   }
   
   /* End solution */

}

int main() {
   string testStr;

   getline(cin, testStr);
   MakeSentenceExcited(testStr);
   cout << testStr;

   return 0;
}
