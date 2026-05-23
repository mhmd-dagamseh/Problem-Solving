#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
enum Prime_or_Not {
      Prime = 1,
      notPrime = 2
};
int readPositiveNumber(string Message)
{
      int Number;
      cout << Message << " : ";
      cin >> Number;
      if (Number <= 0 || Number > 100)
      {
         while (Number <= 0 || Number > 100)
      {
            cout << "Wrong, " << Message << " Again! : ";
            cin >> Number;
         }
      }
      return Number;
}
int fillRandNumber(int From, int To)
{
      int randomNumber = rand() % (To - From + 1) + From;
      return randomNumber;
}
void readArrayElements(int& arrLength, int arr[])
{

      for (int i = 0; i < arrLength; i++)
      {
         arr[i] = fillRandNumber(10, 100);
      }
}
Prime_or_Not checkPrimeNumbers(int Number) 
{
   int limits = round(Number / 2);
   for(int count = 2;count <= limits; count++) {
      if (Number % count == 0){
         return Prime_or_Not::notPrime;
      }
   }
   return Prime_or_Not::Prime;
}
void copyOnlyPrime(int arr2[],int arr[],int arrLength,int &Counter)
{
   Counter =0;
   for (int i = 0; i < arrLength ; i++)
      {
      Prime_or_Not Checker = checkPrimeNumbers(arr[i]);
      if (Checker == Prime_or_Not::Prime) {
         Counter++;
      }}
      // ---------------------------------------------------------
      int index = 0;
      for (int i = 0; i < arrLength ; i++)
      {
      Prime_or_Not Checker = checkPrimeNumbers(arr[i]);
      if (Checker == Prime_or_Not::Prime) {
         arr2[index] = arr[i];
         index++;
      }
      
      
      }
}

int main() {
      srand((unsigned)time(NULL));
      int arr[100], arr2[100], arrLength;
      int Counter = 0;
      arrLength = readPositiveNumber("Enter A Number Of Array Length");
      readArrayElements(arrLength, arr);
      copyOnlyPrime(arr2,arr,arrLength,Counter);
      cout << "Prime numbers copied: ";
      for (int j = 0; j < Counter ; j++)
         {
            cout << arr2[j] << " ";
         }

}
