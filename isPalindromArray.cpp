#include <iostream>
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
void fillArrayElement(int arr[], int arrLength) 
{
   cout << "enter a "<<arrLength<<" Array Number(s) : ";
   for (int i = 0; i < arrLength; i++)
   {
      cin >> arr[i];
   }
   
}
void reversArrayElement(int arr[], int arr2[], int arrLength)
{
   int index = 0,reverse = 0;
      for (reverse = arrLength - 1; reverse >= 0; reverse--) {
         arr2[index] = arr[reverse];
         index++;
      }
   
}
bool isPalindromeArray(int arr[], int arr2[],int arrLength) {
   for (int i = 0; i < arrLength; i++) {
      if (arr[i] != arr2[i]) {
            return false;
      }
   }
      return true;
}
void printResult(bool result) {
   if (result) {
      cout << "\n\nYes, It is a Palindrome Array.";
   }
   else cout << "\n\nNo, It is Not a Palindrome Array.";
}
int main() 
{
   int arrLength = readPositiveNumber("Enter A Array Length");
   int arr[100],arr2[100];
   fillArrayElement(arr, arrLength);
   reversArrayElement(arr,arr2, arrLength);
   printResult(isPalindromeArray(arr, arr2,arrLength));
}