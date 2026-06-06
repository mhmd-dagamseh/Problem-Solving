#include <iostream>
#include <cmath>
#include "myLibrary.h"
using namespace std;
int readNumber(string Message)
{
   int Number;
   cout << Message << " : ";
   cin >> Number;
   return Number;
}
void myAbs(int& Number) 
{
   if (Number < 0) {
      Number *= -1;
   }
}

int main() 
{
   int Number = readNumber("Enter any number : ");
   cout << "the abs number by cmath library : " << abs(Number);
   myAbs(Number);
   cout << "\nthe abs number by cmath library : " << Number;
}