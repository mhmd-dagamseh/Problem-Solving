#include<iostream>
#include<string>
using namespace std;
int readPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
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