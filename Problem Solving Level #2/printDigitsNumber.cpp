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
    while (Number > 0)
    {
      Remainder = Number % 10;
      Number /= 10;
      cout << Remainder << endl;
    }
    

}

int main()
{
   int Number = readPossitiveNumber("Enter A Positiv Number : ");
   printReversedNumber (Number);
}