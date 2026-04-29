#include<iostream>
using namespace std;
// قرائة الرقمين 
// قرائة الرمز واجراء العملية الحسابية
// طباعة الناتج
float readNumber(string Message) 
{
   float Number = 0;
   cout << Message << endl;
   cin >> Number;
   return Number;
}
float CalculationLogic(float firstNumber,float secondNumber) 
{
   char symbolOfCalculatioProccess = '+';
   cout << "Enter A Symbol Of Calculation Proccess : ";
   cin >> symbolOfCalculatioProccess;
   switch (symbolOfCalculatioProccess)
   {
   case '+':
   return firstNumber + secondNumber;
   case '-':
   return firstNumber - secondNumber;
   case '*':
   return firstNumber * secondNumber;
   case '/':
   return firstNumber / secondNumber;
   default:
   return firstNumber + secondNumber;
   }
}
void printResult(float Result)
{
   cout <<"The Result Of This Proccess Is : " << Result; 
}

int main() 
{
   float N1 = readNumber("Enter A First Number : ");
   float N2 = readNumber("Enter A Second Number : ");
   float Result = CalculationLogic(N1,N2);
   printResult(Result);
}