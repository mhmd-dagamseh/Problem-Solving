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
char getRandomCapitalLetter()
{
    char Sym = 0;
    Sym = randNumber(65, 90);
    return Sym;
}
string getKeys()
{
    string Key = "";
    for (int i = 1; i <= 4; i++)
    {
        
        for (int x = 1; x <= 4; x++)
        {
            Key += getRandomCapitalLetter();
        }
        if (i < 4) {
            Key += "-";
        }
        
    }
    return Key;
}
void printNumberOfKeys(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        cout << "\n" << getKeys() << endl;
    }

}
int main()
{
    srand((unsigned)time(NULL));
    int Number = readPositiveNumber("Welcome, Enter A Number Of Keys U Want A Programm To Generation It : ");
    printNumberOfKeys(Number);
}