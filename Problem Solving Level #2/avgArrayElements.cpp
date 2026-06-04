#include<iostream>
#include<string>
#include <cstdlib>
#include <ctime>
#include "myLibrary.h"
using namespace std;

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
int avgArrayElements(int arr[], int arrLength)
{
    int sumArr = 0;
    
    for (int i = 0; i < arrLength; i++)
    {
            sumArr += arr[i];
    }
    return sumArr / arrLength;
}
void printResult(int Result, string Message)
{
    cout << Message + " : " << Result << endl;
}

int main() {
    srand((unsigned)time(NULL));
    int arr[100], arrLength;
    arrLength = readPositiveNumber("Enter A Number Of Array Length");
    readArrayElements(arrLength, arr);
    for (int i = 0; i < arrLength; i++)
    {
        string Message = " Array Element Number [" + to_string(i + 1) + "] Is : ";
        printResult(arr[i], Message);
    }
    cout << "the AVG Of Elements In This Array Is : " << avgArrayElements(arr, arrLength);

}
