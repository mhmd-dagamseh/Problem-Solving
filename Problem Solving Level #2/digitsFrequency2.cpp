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
void foundDigitsFrequency(int Number) 
{
      for(int i = 0; i < 10; i++){
         int digitsFoundFrequency = 0;
         digitsFoundFrequency = frequencyOfNumber(i,Number);
         if(digitsFoundFrequency > 0) {
            cout << "Digits " << i << " Frequency Is \"" << digitsFoundFrequency << "\" Times." << endl;
         }

      }
      
}
int main()
{
   int Number = readPositiveNumber("Enter A Positiv Number : ");
   foundDigitsFrequency(Number);
}