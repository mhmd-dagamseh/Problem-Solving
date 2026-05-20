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
void printReversedNumber (int Number)
{
    int Remainder = 0;
    int Reversed = 0;
    while (Number > 0)
    {
      Remainder = Number % 10;
      Number /= 10;
      Reversed = Reversed * 10 + Remainder;
    }
    cout << Reversed;

}

int main()
{
   int Number = readPositiveNumber("Enter A Positiv Number : ");
   printReversedNumber (Number);
}