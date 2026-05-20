#include <iostream>
#include <string>
using namespace std;
int readPositiveNumber(string Message)
{
    int Number;
    cout << Message << " : ";
    cin >> Number;
    if (Number <= 0)
    {
        while (Number <= 0)
        {
            cout << "Wrong, " << Message << " Again! : ";
            cin >> Number;
        }
    }
    return Number;
}
int reverseOfNumber(int Number)
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
void printReverseNumber(int Number) 
{
   int Reverse = reverseOfNumber(Number);
     int Reverse2 = 0;
     int Remainder = 0;
     while (Reverse > 0)
    {
      Remainder = Reverse % 10;
      Reverse /= 10;
      cout << Remainder <<endl;
    }

}
int main()
{
   int Number = readPositiveNumber("Enter A Positiv Number : ");
   printReverseNumber(Number);
}