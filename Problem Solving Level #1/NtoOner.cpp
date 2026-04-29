#include <iostream>
using namespace std;
int readNumber()
{
    int Num;
    cout << "Enter A Number Which U Want To Test It : ";
    cin >> Num;
    return Num;
}
void printLoopNumber(int Num)
{
    for (int i = 0; i >= Num; i--) {
        cout << i << endl;
    }
}
int main()
{
    printLoopNumber(readNumber());
    return 0;
}
