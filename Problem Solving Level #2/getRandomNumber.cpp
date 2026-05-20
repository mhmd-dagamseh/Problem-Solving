#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int randNumber(int From,int To) 
{

   int randNum = rand() % (To - From + 1) + From;
   return randNum;
}
int main()
{
    srand((unsigned)time(NULL));
    
    cout << randNumber(20,100);
       cout << randNumber(20,100);
}