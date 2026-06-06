#include <iostream>  
using namespace std;  
float myABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1; 
}
int myRound(float FractionalNumber, float Number)
{
    if (Number > 0)
{
   if (FractionalNumber >= 5) 
   {
      FractionalNumber = 10 - FractionalNumber;
      FractionalNumber /= 10;
      return int(Number + FractionalNumber);
      
   }
   else if (FractionalNumber < 5) 
   {
      FractionalNumber /= 10;
      return int(Number - FractionalNumber);
   }
}        
    else if (Number < 0) 
    {
      if (FractionalNumber <= 5) 
   {
      FractionalNumber /= 10;
      return int(Number + FractionalNumber);
      
   }
   else if (FractionalNumber > 5) 
   {
      FractionalNumber = 10 - FractionalNumber;
      FractionalNumber /= 10;
      return int(Number + FractionalNumber);
      
   }
    }
        
}
float getFractionalNumber(float Number) {
   int newNumber = Number * 10;
   return  float(myABS(newNumber % 10));
}
float ReadNumber()
{
    float Number;
    cout << "Please enter a number? ";
    cin >> Number;  
    
    return Number;  
}

int main()
{
    float Number = ReadNumber();  
    cout << "My Round Result : " << myRound(getFractionalNumber(Number), Number) << endl;
    cout << "C++ Round Result: " << round(Number) << endl;

    return 0;  
}