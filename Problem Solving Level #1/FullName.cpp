#include <iostream>
using namespace std;

struct stInfo{
   string firstName;
   string lastName;
};
stInfo readInfo(){
   stInfo Info;
   cout << "Enter Ur First Name Here : ";
   cin >> Info.firstName;
   cout << "\nEnter Ur Last Name Here : ";
   cin >> Info.lastName;
   return Info;
}
string getFullName(stInfo Info,bool Reversed){
   string FullName = "";
   if(Reversed)
   FullName = Info.lastName + " " + Info.firstName; 
   else 
   FullName = Info.firstName + " " + Info.lastName; 
   return FullName;
}
void printFullName(string FullName){
   cout << "\n" << FullName;
}
int main(){
   printFullName(getFullName(readInfo(),true));
   return 0;
}