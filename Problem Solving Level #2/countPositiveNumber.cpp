#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include "myLibrary.h"
using namespace std;
int readNumber(string Message)
{
    int Number;
    cout << Message << " : ";
    cin >> Number;
    return Number;
}
void readArrayElements(int& arrLength, int arr[])
{
   for (int i = 0; i < arrLength; i++)
   {
      arr[i] = getRandNumber(-1000, 1000);
    }
   }
   
void countPositiveNumbers( int arr[], int arrLength,bool isPossitiveNumber[],int &Counter)
{
    for (int i = 0; i < arrLength; i++)
    {
       if (isPossitiveNumber[i] == true) {
          Counter++;
         }
      }
      
   }
   void isPossitiveNumber(int arr[],int arrLength,bool Answer[]) 
   {
      for (int i = 0;i < arrLength ; i++) 
      {
         if (arr[i] > 0) 
         Answer[i] = true;
         else 
         Answer[i] = false;
      }
   }
   
int main() {
   srand((unsigned)time(NULL));
   int arr[100], arrLength,Counter = 0;
   bool Answer[100];
   arrLength = readNumber("Enter A Number Of Array Length");
   readArrayElements(arrLength, arr);
   isPossitiveNumber(arr,arrLength,Answer); 
   countPositiveNumbers(arr, arrLength,Answer,Counter);
   cout << endl;
   cout << "count of positive numbers are " << Counter << endl;
   system("pause");
}
