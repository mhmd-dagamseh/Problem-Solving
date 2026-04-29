#include <iostream>
using namespace std;
float readPositiveNumber(string Message) 
{
   float Number;
   cout << Message;
   cin >> Number;
   if(Number < 0){
      while (Number < 0)
      {
         cout << "Sorry, Enter A Possitive Number : ";
        cin >> Number;
      }
      
   }
   return Number;
}
void hoursToDaysAndWeeks(float Number)
{
   float hoursToDays = Number / 24;
   float hoursToWeeks = hoursToDays / 7;
   cout << "Total Transition From Hours To Days : " << hoursToDays << endl;
   cout << "Total Transition From Hours To Weeks : " << hoursToWeeks << endl;
}

int main() 
{
   float Number = readPositiveNumber("Enter A Number Of Hours Thats U Studied It With C++ : ");
   hoursToDaysAndWeeks(Number);
}