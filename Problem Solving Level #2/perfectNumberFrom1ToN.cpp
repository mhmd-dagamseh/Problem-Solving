#include <iostream>
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
   int Number = readPositiveNumber("Enter A Possitive Number : ");
   printResultsFrom_OneToN(Number);
}