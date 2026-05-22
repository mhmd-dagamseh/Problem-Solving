#include <iostream>
#include <cmath>
using namespace std;
enum primeNumbers{
   Prime = 1,
   notPrime = 2,
};
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
primeNumbers checkPrimeNumbers(int Number) 
{
   int limits = round(Number / 2);
   for(int count = 2;count <= limits; count++) {
      if (Number % count == 0){
         return primeNumbers::notPrime;
      }
   }
   return primeNumbers::Prime;
}
void printPrimeNumbers(int Number) 
{
   for (int i = 1;i <= Number ;i++)
   {
      if (checkPrimeNumbers(i) == primeNumbers::Prime)
      {
         cout << " " << i;
      }
      
   }
   
}


int main () 
{
   int Number = readPositiveNumber("Enter A Possitive Number Please : ");
   printPrimeNumbers(Number);
}