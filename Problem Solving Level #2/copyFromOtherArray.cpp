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
void coppingArray(int arr2[], int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr2[i] = arr[i];
    }

}
void printResult(int Result, string Message)
{
    cout << Message + " : " << Result << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], arr2[100], arrLength;
    arrLength = readPositiveNumber("Enter A Number Of Array Length");
    readArrayElements(arrLength, arr);
    for (int i = 0; i < arrLength; i++)
    {
        string Message = " Array Element Number [" + to_string(i + 1) + "] Is : ";
        printResult(arr[i], Message);
    }
    coppingArray(arr2,arr, arrLength);
    for (int i = 0; i < arrLength; i++)
    {
        cout << " " << arr2[i];
    }

}
