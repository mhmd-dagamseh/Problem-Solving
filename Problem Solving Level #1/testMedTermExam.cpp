#include<iostream>
using namespace std;
struct ST {
   string name;
   int uniID;
   float gpa;
};
int main() {
ST s1;
cin >> s1.name;
cin >> s1.uniID;
cin >> s1.gpa;
cout << s1.name <<endl;
cout << s1.uniID <<endl;
cout << s1.gpa <<endl;
}