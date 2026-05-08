#include <iostream>
#include <string>
using namespace std;
int readPossitiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int getReverseNumber(int Number)
{
   int Reverse = 0;
    int Remainder = 0;
    while (Number > 0)
    {
      Remainder = Number % 10;
      Number /= 10;
      Reverse = Reverse * 10 + Remainder;
      
    }
    return Reverse;
}
bool isPalindromeNumber(int Number)
{
   int Reverse = getReverseNumber(Number);
   if (Reverse == Number) {
      return true;
   }
   else 
   return false;
}
void printResult(bool isPalindrome) 
{
   if (isPalindrome) {
      cout << "\n\n The Number Is A Palindrome.\n";
   }
   else 
   cout << "\n\n The Number Is Not A Palindrome.\n";
   
}
int main()
{
   int Number = readPossitiveNumber("Enter A Positiv Number : ");
   bool Result = isPalindromeNumber(Number);
   printResult(Result);
}