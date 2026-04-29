#include <iostream>
using namespace std;
struct timeOfSeconds {
    int Years;
    int Months;
    int Weeks;
    int Days;
    int Hours;
    int Minutes;
    int Seconds;
};
float readPositiveNumber(string Message)
{
    float Number;
    cout << Message;
    cin >> Number;
    if (Number < 0) {
        while (Number < 0)
        {
            cout << "Sorry, Enter A Possitive Number : ";
            cin >> Number;
        }

    }
    return Number;
}
timeOfSeconds calculationOfTime()
{
    timeOfSeconds t;
    t.Years = readPositiveNumber("Enter A Number Of Years : ");
    t.Months = readPositiveNumber("Enter A Number Of Months : ");
    t.Weeks = readPositiveNumber("Enter A Number Of Weeks : ");
    t.Days = readPositiveNumber("Enter A Number Of Days : ");
    t.Hours = readPositiveNumber("Enter A Number Of Hours : ");
    t.Minutes = readPositiveNumber("Enter A Number Of Minuts : ");
    t.Seconds = readPositiveNumber("Enter A Number Of Seconds : ");
    return t;

}
void printResults(timeOfSeconds t)
{
    int totalSeconds = 0;
    totalSeconds += t.Years * 365 * 24 * 60 * 60;
    totalSeconds += t.Months * 30 * 24 * 60 * 60;
    totalSeconds += t.Weeks * 7 * 24 * 60 * 60;
    totalSeconds += t.Days * 24 * 60 * 60;
    totalSeconds += t.Hours * 60 * 60;
    totalSeconds += t.Minutes * 60;
    totalSeconds += t.Seconds;
    cout << "The Total Seconds Is : " << totalSeconds;
}

int main()
{
    timeOfSeconds t = calculationOfTime();
    printResults(t);

}