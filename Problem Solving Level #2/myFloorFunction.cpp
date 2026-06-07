#include <iostream>  
using namespace std;  
float myABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1; 
}
int myFloor(float FractionalNumber, float Number)
{
if (FractionalNumber != 0) {
   if (Number > 0)
{
   FractionalNumber /= 10;
   return int(Number - FractionalNumber);
}        
else if (Number < 0) 
{
   FractionalNumber = 10 - FractionalNumber;
   FractionalNumber /= 10;
   return int(Number - FractionalNumber);
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
    cout << "My Floor Result : " << myFloor(getFractionalNumber(Number), Number) << endl;
    cout << "C++ Floor Result: " << floor(Number) << endl;

    return 0;  
}