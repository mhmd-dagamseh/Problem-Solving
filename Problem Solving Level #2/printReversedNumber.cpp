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
   int Number = readPossitiveNumber("Enter A Positiv Number : ");
   printReversedNumber (Number);
}