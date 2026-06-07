#include <iostream>  
using namespace std;  
float myABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1; 
}
int myCeil(float FractionalNumber, float Number)
{
    if (FractionalNumber == 0) return int(Number);
    if (Number > 0)
    {
        return int(Number) + 1;
    }
    else
    {
        return int(Number);
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
    cout << "My Ceil Result : " << myCeil(getFractionalNumber(Number), Number) << endl;
    cout << "C++ Ceil Result: " << ceil(Number) << endl;

    return 0;  
}