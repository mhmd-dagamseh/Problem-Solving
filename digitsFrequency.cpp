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
int frequencyOfNumber(int freqNumber, int Number)
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
    int freqNumber = readPositiveNumber("Enter A Frequency Number : ");
    int Number = readPositiveNumber("Enter A Simple Number : ");

    cout << "The Frequency Of Number " << Number << " Is : " << frequencyOfNumber(freqNumber, Number);
}