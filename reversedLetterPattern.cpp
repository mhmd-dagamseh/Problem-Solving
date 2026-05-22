#include<iostream>
#include<string>
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
void printInvertNumberPattern(int Number)
{
    int Letter = 'A';
    for (int i = Letter; i <= Letter + Number - 1; i++)
    {
        for (int x = 1; x <= 1 - (Letter - i); x++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{
    int Number = readPositiveNumber("Enter A Positive Number : ");
    printInvertNumberPattern(Number);
}