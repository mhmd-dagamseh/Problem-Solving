#include <iostream>
#include <cmath>
using namespace std;
enum primeNumbers{
   Prime = 1,
   notPrime = 2,
};
int readPossitiveNumber(string Message) 

{
   int Number;
   do
   {
      cout << " Wrong Entering, Try Input Possitive Number : ";
      cin >> Number;
   } while (Number < 0);
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
   int Number = readPossitiveNumber("Enter A Possitive Number Please : ");
   printPrimeNumbers(Number);
}