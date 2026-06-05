#include "myLibrary.h"
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
int getRandNumber(int From, int To)
{
    int randomNumber = rand() % (To - From + 1) + From;
    return randomNumber;
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
void isPossitiveNumber(int arr[],int arrLength,bool Answer[]) 
   {
      for (int i = 0;i < arrLength ; i++) 
      {
         if (arr[i] > 0) 
         Answer[i] = true;
         else if (arr[i] < 0)
         Answer[i] = false;
      }
   }