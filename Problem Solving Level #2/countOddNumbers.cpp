#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include "myLibrary.h"
using namespace std;
void readArrayElements(int& arrLength, int arr[])
{
   for (int i = 0; i < arrLength; i++)
   {
      arr[i] = getRandNumber(10, 100);
    }
   }
   
void countOddNumbers( int arr[], int arrLength,bool isOdd[],int &Counter)
{
    for (int i = 0; i < arrLength; i++)
    {
       if (isOdd[i] == true) {
          Counter++;
         }
      }
      
   }
   void isOdd(int arr[],int arrLength,bool Answer[]) 
   {
      for (int i = 0;i < arrLength ; i++) 
      {
         if ((arr[i] % 2) == 1) 
         Answer[i] = true;
         else 
         Answer[i] = false;
      }
   }
   
int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrLength,Counter = 0;
    bool Answer[100];
    arrLength = readPositiveNumber("Enter A Number Of Array Length");
    readArrayElements(arrLength, arr);
    isOdd(arr,arrLength,Answer); 
    countOddNumbers(arr, arrLength,Answer,Counter);
    cout << endl;
    cout << "count of odd numbers are " << Counter << endl;
   system("pause");
}
