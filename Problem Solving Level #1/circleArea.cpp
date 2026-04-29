#include <iostream>
#include <cmath>
using namespace std;
void readValue(int &A,int &B,int &C) 
{
   cout << "Enter A : ";
   cin >> A;
      cout << "Enter B : ";
   cin >> B;
      cout << "Enter C : ";
   cin >> C;
}
float areaOfCircleByTriangle(int A,int B,int C) 
{
   float P = (A+B+C) / 2;
   return P;
}
float CircleArea(int A,int B,int C,float P) 
{
   double Pi = 22 / 7;
   double Area = 0;
   double calc = 0;
   calc = (A*B*C) / (4 * sqrt(P*(P-A)*(P-B)*(P-C)));
   Area = Pi * pow(calc,2);

   return Area;
}
void printArea(double Area) 
{
   cout << "The Area Of This Circle Is : " << Area;
}

int main()
{
   int a,b,c;
   readValue(a,b,c);
   float p = areaOfCircleByTriangle(a,b,c);
   float Area = CircleArea(a,b,c,p);
   printArea(Area);
   return 0;
}