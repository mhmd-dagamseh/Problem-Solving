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
int getRandNumber(int From, int To)
{
    int randomNumber = rand() % (To - From + 1) + From;
    return randomNumber;
}
char sortCharType(charType CharType)
{
   char Sym = 0;
   switch (CharType)
   {
   case capitalLetter :
      Sym = getRandNumber(65, 90);
      return Sym;
      case specialChar :
      Sym = getRandNumber(33, 47);
      return Sym;
      case smallLetter :
      Sym = getRandNumber(97, 122);
      return Sym;
      case Numbers :
      Sym = getRandNumber(48, 57);
      return Sym;
   
   default:
      Sym = getRandNumber(97, 122);
      return Sym;;
   }
}
void getKeys(int arrLength,string arr[])
{
      for (int i = 0 ; i < arrLength ;i++) 
      {
         for (int column = 1;column <= 4;column++)
         {
         for (int word = 1; word <= 4;word++) 
         {
            arr[i] = arr[i] + sortCharType(capitalLetter);
         }
         
            if (column < 4)
            {
               arr[i] = arr[i] + '-';
            }
            
         }
      }
}

int main()
{
      srand((unsigned)time(NULL));
      int arrLength = readPositiveNumber("Welcome, Enter A Number Of Keys U Want A Programm To Generation It");
      string arr[100];
      getKeys(arrLength,arr);
      for (int i = 0 ; i < arrLength ;i++) 
      {
         cout << arr[i] <<endl;
      }
}