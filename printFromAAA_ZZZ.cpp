#include<iostream>
#include<string>
using namespace std;

void printLogic()
{
    int firstLetter = 'A';
    int lastLetter = 'Z';
    for (int firstBox = firstLetter; firstBox <= lastLetter; firstBox++)
    {
        for (int secondBox = firstLetter; secondBox <= lastLetter; secondBox++)
        {
            for (int lastBox = firstLetter; lastBox <= lastLetter; lastBox++)
            {
                cout << char(firstBox) << char(secondBox) << char(lastBox) << endl;
            }
        }
    }
}

int main()
{
    printLogic();
}