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
   int Number = readPossitiveNumber("Enter A Positiv Number : ");
   printSumOfDigitsNumber(Number);
}