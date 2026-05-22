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
void printSumOfDigitsNumber(int Number)
{
    int Remainder = 0,Sum = 0;
    while (Number > 0)
    {
      Remainder = Number % 10;
      Number /= 10;
      Sum += Remainder;
    }
    cout << "\n" << Sum;

}

int main()
{
   int Number = readPositiveNumber("Enter A Positiv Number : ");
   printSumOfDigitsNumber(Number);
}