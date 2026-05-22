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
        arr[i] = fillRandNumber(1, 1000);
    }
}
int checkMaxElement(int arr[], int arrLength)
{
    int maxNumber = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }
    return maxNumber;
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
    cout << "the max Number In This Array Is : " << checkMaxElement(arr, arrLength);

}
