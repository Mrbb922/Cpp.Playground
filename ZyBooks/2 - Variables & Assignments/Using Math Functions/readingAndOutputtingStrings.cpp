/*

        Write a program that reads a person's first and last names, separated by a space. Then the program outputs last name, 
        comma, first name. End with newline. 
        Example output if the input is: Maya Jones
        Jones, Maya 

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstName;
   string lastName;

/* Your solution goes here  */

cin >> firstName;
cin >> lastName;

cout << lastName << ", " << firstName << endl;

/* End Solution */

   return 0;
}
