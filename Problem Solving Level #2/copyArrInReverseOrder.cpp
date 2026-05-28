#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
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
int getRandNumber(int From, int To)
{
      int randomNumber = rand() % (To - From + 1) + From;
      return randomNumber;
}
void fillArrayElements(int& arrLength, int arr[])
{

      for (int i = 0; i < arrLength; i++)
      {
         arr[i] = getRandNumber(1, 20);
      }
}
void Swapping(int &firstVal,int &lastVal) 
{
   int Temp = firstVal;
   firstVal = lastVal;
   lastVal = Temp;
}
void reverseArrayElement(int& arrLength, int arr[]) 
{
   int halfLength = round(arrLength / 2);
   
   for (int i = 0; i <  halfLength; i++)
   {
      Swapping(arr[i],arr[(arrLength - 1) - i]);
   }
   
}
int main() {
      srand((unsigned)time(NULL));
      int arr[100], arrLength;
      int Counter = 0;
      arrLength = readPositiveNumber("Enter A Number Of Array Length");
      fillArrayElements(arrLength, arr);
      cout << "The Array Before Swapping : ";
      for (int j = 0; j < arrLength ; j++)
         {
            cout << arr[j] << " ";
         }
         reverseArrayElement(arrLength,arr);
         cout << "\n\nThe Array After Swapping : ";
      for (int j = 0; j < arrLength ; j++)
         {
            cout << arr[j] << " ";
         }
}
