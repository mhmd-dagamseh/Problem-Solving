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
         arr[i] = fillRandNumber(1, 100);
      }
}
void printResult(int Result)
{
      cout << Result << " ";
}
void searchAboutNumber(int searchNumber,int arrLength,int arr[]) 
{
   int counter = 0;
   cout << "\n The Number U Looking For Is : " << searchNumber << endl;
   for (int i = 0;i < arrLength;i++) 
   {
      if (searchNumber == arr[i]) 
      {
         counter++;
         cout << "The Number Found At Position : " << i << endl;
         cout << "The Number Found its Order : " << i+1 << endl;
      }
   }
   if (counter == 0) 
   {
      cout << "The Number U Looking For Its Not Found!! " << endl;
   }
   
}

int main() {
      srand((unsigned)time(NULL));
      int arr[100], arrLength;
      arrLength = readPositiveNumber("Enter A Number Of Array Length");
      readArrayElements(arrLength, arr);
      cout << "The Random Array Is : \n";
      for (int i = 0; i < arrLength; i++)
      {
         printResult(arr[i]);
      }
      cout << endl;
      int searchNumber = readPositiveNumber("Enter A Number U Wanna To Find It");
      searchAboutNumber(searchNumber,arrLength,arr);
}
