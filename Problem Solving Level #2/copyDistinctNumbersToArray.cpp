#include<iostream>
#include<string>

using namespace std;
void fillingArray(int arr[], int& arrLength)
{
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}
void fillRightArray(int Element, int arr[], int& arrLength) {
    arrLength++;
    arr[arrLength - 1] = Element;
}
void checkArrayElements(int arr2[], int arr[], int arrLength, int& arrLength2)
{
    int Temp = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] != Temp)
        {
            Temp = arr[i];
            fillRightArray(arr[i], arr2, arrLength2);
        }
    }
}



int main()
{
    int arr[10];
    int arr2[10];
    int arrLength;
    int arrLength2 = 0;
    fillingArray(arr, arrLength);
    checkArrayElements(arr2, arr, arrLength, arrLength2);
    cout << "Unique elements are: ";
    for (int i = 0; i < arrLength2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}