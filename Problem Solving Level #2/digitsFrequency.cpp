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
int frequencyOfNumber(int freqNumber,int Number)
{
   int freqCounter = 0;
    int Remainder = 0;
    while (Number > 0)
    {
      Remainder = Number % 10;
      Number /= 10;
      if (Remainder == freqNumber) {
         freqCounter++;
      }
      
    }
    return freqCounter;
}
int main()
{
   int Number = readPossitiveNumber("Enter A Positiv Number : ");
   int freqNumber = readPossitiveNumber("Enter A Frequency Number : ");


   cout << "The Frequency Of Number " << freqNumber << "Is : " << frequencyOfNumber(freqNumber,Number);
}