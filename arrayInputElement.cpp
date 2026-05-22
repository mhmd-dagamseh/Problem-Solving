#include <iostream>
#include <vector>
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
vector<int> inputArrElement(int sizeNumber) {
    vector<int> arr;
    for (int i = 0;i < sizeNumber; i++)
    {
          int value;
    cout << "Enter Element [" << (i+1) << "] : ";
    cin >> value;
    arr.push_back(value); 
    }
    return arr;
}
int checkElementRepeated(vector<int> arr,int sizeNumber,int repeateNumber)
{
    int repeateCheckNumber = 0;
    for (int i = 0; i < sizeNumber;i++)
    {
        if (repeateNumber == arr[i])
        {
            repeateCheckNumber++;
        }
        
    }
    return repeateCheckNumber;
}
void printResults(int repeateResultNumber,vector<int> arr,int sizeNumber,int repeateNumber) 
{
    cout << "Original Array Is : ";
    for (int i = 0;i < sizeNumber; i++ ) {
        cout << arr[i];
    }
    cout << "\n" << repeateNumber << " Is Repeated " << repeateResultNumber << " Time(s). ";
}

int main() 
{
    int sizeNumber = readPositiveNumber("Enter A Size Of Array");
    vector<int> arrayInputting = inputArrElement(sizeNumber);
    int repeateNumber = readPositiveNumber("Enter A Repeate Number");
    printResults(checkElementRepeated(arrayInputting,sizeNumber,repeateNumber),arrayInputting,sizeNumber,repeateNumber);

}