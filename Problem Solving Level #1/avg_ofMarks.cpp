#include <iostream>
using namespace std;
enum enPassFail {
    Pass = 1,
    Fail = 2
};
void readMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Enter Mark Number 1 : ";
    cin >> Mark1;
    cout << "Enter Mark Number 2 : ";
    cin >> Mark2;
    cout << "Enter Mark Number 3 : ";
    cin >> Mark3;
}
int sumOfMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}
float avgOfMarks(int resultOfSum)
{
    float resultOfAvg = resultOfSum / 3.00;
    return(float)resultOfAvg;
}
enPassFail checkPassFail(float resultOfAvg)
{
    if (resultOfAvg >= 50) {
        return enPassFail::Pass;
    }
    else {
        return enPassFail::Fail;
    }
}
void printResults(enPassFail Status, float resultOfAvg, int resultOfSum)
{
    cout << "The Sum Of Ur Marks Is : " << resultOfSum << endl;
    cout << "The Avg Of Ur Marks Is : " << resultOfAvg << endl;
    if (Status == enPassFail::Pass) {
        cout << "You Are Pass \n";
    }
    else {
        cout << "You Are Not \n";
    }
}
int main()
{
    int Mark1, Mark2, Mark3;
    readMarks(Mark1, Mark2, Mark3);
    int Sum = sumOfMarks(Mark1, Mark2, Mark3);
    float Avg = avgOfMarks(Sum);
    enPassFail Status = checkPassFail(Avg);
    printResults(Status, Avg, Sum);
    return 0;
}