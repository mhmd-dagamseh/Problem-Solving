#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
enum charType{
   specialChar = 1,
   smallLetter = 2,
   capitalLetter = 3,
   Numbers = 4,
};
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
char sortCharType(charType CharType)
{
   char Sym = 0;
   switch (CharType)
   {
   case capitalLetter :
    Sym = randNumber(65, 90);
    return Sym;
    case specialChar :
    Sym = randNumber(33, 47);
    return Sym;
    case smallLetter :
    Sym = randNumber(97, 122);
    return Sym;
    case Numbers :
    Sym = randNumber(48, 57);
    return Sym;
   
   default:
      Sym = randNumber(97, 122);
    return Sym;;
   }
}
string getOneKey()
{
    string Key = "";
    for (int i = 1; i <= 4; i++)
    {
        
        for (int x = 1; x <= 4; x++)
        {
            Key += sortCharType(smallLetter);
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
        cout << "\n" << getOneKey() << endl;
    }

}
int main()
{
    srand((unsigned)time(NULL));
    int Number = readPositiveNumber("Welcome, Enter A Number Of Keys U Want A Programm To Generation It : ");
    printNumberOfKeys(Number);
}