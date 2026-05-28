#include <iostream>
#include <cstdlib>
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
int randNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void getArrayFrom1ToN(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = i + 1;
    }
}
void shuffleRandomArrElements(int arr[], int arrLength)
{
    int counterArray[100];
    for (int i = 0; i < arrLength; i++)
    {
        int randIndex = randNumber(0, arrLength - 1);
        counterArray[i] = randIndex;
        for (int j = 0; j < 100; j++)
        {
            if (randIndex != counterArray[j]) {
                arr[randIndex] = i + 1;
            }
        }


    }
}
void printResult(int Result, string Message)
{
    cout << Message + " : " << Result << endl;
}
int main()
{
    int arr[100];
    srand((unsigned)time(NULL));
    int arrLength = readPositiveNumber("Enter A Positive Number : ");
    getArrayFrom1ToN(arr, arrLength);
    cout << "The Arreay Before Shuffle : ";
    for (int i = 0; i < arrLength; i++)
    {
        cout << " " << arr[i];
    }
    cout << "\n\n";
    shuffleRandomArrElements(arr, arrLength);
    cout << "The Arreay After Shuffle : ";
    for (int i = 0; i < arrLength; i++)
    {
        cout << " " << arr[i];
    }
}
// تجربة رقم 1 بائت بالفشل