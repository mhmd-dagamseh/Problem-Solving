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
void printInvertNumberPattern(int Number) 
{
   for (int i = Number; i > 0;i--)
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
   printInvertNumberPattern(Number);
}