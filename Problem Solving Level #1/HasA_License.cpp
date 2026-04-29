#include <iostream>
using namespace std;
struct stInfo{
   int Age;
   bool HasDrivingLicense;
};
stInfo readInfo(){
   stInfo Info;
   cout << "How Old Are U : ";
   cin >> Info.Age;
   cout << "\nAre U Have A Driving License : ";
   cin >> Info.HasDrivingLicense;
   return Info;
}
bool isAccepted(stInfo Info){
   return(Info.Age >= 21 && Info.HasDrivingLicense);
}
void printInfo(stInfo Info){
   if (isAccepted(Info)){
      cout << "Login Successfuly";
   }
   else {
      cout << "Login Valid";
   }
}
int main() {
   printInfo(readInfo());
    return 0;
}