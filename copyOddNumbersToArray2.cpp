#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
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
   
   void addElementToArray(int Number,int arr[],int &arrLength) 
   {
      arrLength++;
      arr[arrLength - 1] = Number;
   }
void copyOnlyOddNumbers(int arr2[], int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
       if ((arr[i] % 2) == 1) {
          addElementToArray(arr[i],arr,arrLength);
         }
      }
      
   }
int main() {
    srand((unsigned)time(NULL));
    int arr[100], arr2[100], arrLength;
    arrLength = readPositiveNumber("Enter A Number Of Array Length");
    readArrayElements(arrLength, arr);
   
    for (int i = 0; i < arrLength; i++)
    {
        cout << " " << arr[i];
    }
    copyOnlyOddNumbers(arr2, arr, arrLength);
    cout << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cout << " " << arr2[i];
    }

}
