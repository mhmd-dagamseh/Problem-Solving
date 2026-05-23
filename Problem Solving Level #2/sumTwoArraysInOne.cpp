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
int sumElement(int arr[], int arrLength)
{
    int sumArr = 0;

    for (int i = 0; i < arrLength; i++)
    {
        sumArr += arr[i];
    }
    return sumArr;
}
void sumArrays(int arr1[], int arr2[],int arrSum[],int arrLength)
{
    for (int i = 0; i < arrLength;i++) 
    {
        arrSum[i] = arr1[i] + arr2[i];
    }
}
void printResult(int Result)
{
    cout << " " << Result;
}

int main() {
    srand((unsigned)time(NULL));
    int arr1[100], arr2[100], arrSum[100], arrLength;
    arrLength = readPositiveNumber("Enter A Number Of Array Length");
    readArrayElements(arrLength, arr1);
    readArrayElements(arrLength, arr2);
    sumArrays(arr1, arr2, arrSum, arrLength);
    string Message = " First Array Element Number [1] Is : ";
    cout << "\n" << Message;
    for (int i = 0; i < arrLength; i++)
    {
        printResult(arr1[i]);
    }
    string Message2 = " Second Array Element Number [2] Is : ";
    cout << "\n\n" << Message2;
    for (int i = 0; i < arrLength; i++)
    {
        printResult(arr2[i]);
    }
    cout << "\n\n";
    string sumMessage = " The Sum Of First Array And Second Array Is : ";
    cout << sumMessage;
    for (int i = 0; i < arrLength; i++)
    {
        printResult(arrSum[i]);
    }
    cout << "\n\n";

}
