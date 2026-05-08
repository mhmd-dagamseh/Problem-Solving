#include<iostream>
using namespace std;

string columnSparator(int column) 
{
    if (column < 10) {
        return "   |";
    }
    else if (column >= 10) {
        return "  |";
    }

}
void inputNumberInTabel(int arr[11][11])
{
    int column1 = 0;
    for (int column = 1; column <= 10; column++)
    {
        arr[0][column] = column;
    }
    for (int row = 1; row <= 10; row++)
    {
        arr[row][0] = row;
    }
    for (int row = 1; row <= 10; row++)
    {
        for (int column = 1; column <= 10; column++)
        {
            arr[row][column] = row * column;
        }
    }
}
void printNumberOfTabel(int arr[11][11])
{
    cout << "\t\t";
    for (int column = 1; column <= 10; column++)
    {
        cout << arr[0][column] << "\t";
        
    }
    cout << "\n";
    cout << "           ";
    for (int column = 1; column <= 10; column++)
    {
        cout << "   _____";

    }
    cout << "\n\n";
    for (int row = 1; row <= 10; row++)
    {
        cout << "\n" << arr[row][0] << columnSparator(row) << "\t" ;
        for (int column = 1; column <= 10; column++) {
            cout << "\t" << arr[row][column];
        }
        cout << "\n";
    }
}
int main()
{
    int arr[11][11];
    inputNumberInTabel(arr);
    printNumberOfTabel(arr);
}