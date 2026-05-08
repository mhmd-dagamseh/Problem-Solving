#include <iostream>
using namespace std;
int readPossitiveNumber(string Message) 
{
   int Number;
   do
   {
      cout << Message;
      cin >> Number;
   } while (Number <= 0);
   return Number;
}
bool isPerfect(int Number) 
{
   
   int results = 0;
   for(int counter = 1;counter < Number ; counter++)
   {
      if (Number % counter == 0){
         results += counter;
      }
   }
   if (results == Number) {
      return true;
   }
   else {
      return false;
   }
}
void printResultsFrom_OneToN(int Number)
{
   for(int index = 1; index <= Number ; index++) {
      if(isPerfect(index)) {
         cout << index << " Is A Perfect Number ." << endl;
      }
   }
}
int main()
{
   int Number = readPossitiveNumber("Enter A Possitive Number : ");
   printResultsFrom_OneToN(Number);
}