#include <iostream>
using namespace std;
void readNumbers(int &Num1,int &Num2) 
{
   cout << "Enter Number One Please : ";
   cin >> Num1;
      cout << "Enter Number Two Please : ";
   cin >> Num2;
}
void swapNumbers(int &Num1,int &Num2) 
{
   int Temp = Num1;
   Num1 = Num2;
   Num2 = Temp;
}
void printNumAfterSwap(int &Num1,int &Num2) 
{
   cout << "Number 1 Is : " << Num1 << endl;
   cout << "Number 2 Is : " << Num2 << endl;
}

int main () 
{
   int Num1 , Num2;
   readNumbers(Num1 , Num2);
   printNumAfterSwap(Num1 , Num2);
   swapNumbers(Num1 , Num2) ;
   printNumAfterSwap(Num1 , Num2);
   return 0;
}