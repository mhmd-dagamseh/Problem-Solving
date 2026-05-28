#include<iostream>
#include<string>
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
void fillArray(int arr[], int& Element, int& index, bool& answer)
{
    Element = readPositiveNumber("Enter A Number");
    arr[index] = Element;
    index++;
    do
    {
        cout << "Do U Wanna Add Other Number : yes [1]  |  no [0] : ";
        cin >> answer;
        if (answer == 1) {
            Element = readPositiveNumber("Enter A Number");
            arr[index] = Element;
            index++;
        }
    } while (answer != 0);
}
void checkArray(int arr[], int index)
{
    cout << "array length is : " << index << endl;
    cout << "array elements is : " << endl;
    for (int i = 0; i < index; i++)
    {
        cout << arr[i] << " ";
    }

}
int main() {
    int arr[100], Element, index = 0;
    bool answer;
    fillArray(arr, Element, index, answer);
    checkArray(arr, index);
}
