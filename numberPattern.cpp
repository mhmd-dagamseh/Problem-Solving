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
void printNumberPattern(int Number) 
{
   for (int i = 1; i <= Number ;i++)
   {
      for(int x = i; x > 0;x--) 
      {
         cout << i;
      }
      cout << endl;
   }
}

int main() 
{
   int Number = readPositiveNumber("Enter A Positive Number : ");
   printNumberPattern(Number);
}