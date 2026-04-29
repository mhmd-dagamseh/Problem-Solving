#include<iostream>
using namespace std;
enum dayInWeek {
    sat = 1,
    sun = 2,
    mon = 3,
    tue = 4,
    wed = 5,
    thu = 6,
    fri = 7
};
int readDayInRange(string Message)
{
    int Number;
    cout << Message;
    cin >> Number;
    if (Number > 0 && Number <= 7) {
        return Number;
    }
    else {
        while (Number <= 0 || Number > 7)
        {
            cout << "Again, Enter A Number Between 1 To 7 : ";
            cin >> Number;
        }
        return Number;
    }
}
dayInWeek checkDayInRange(int Number)ٍ
{
    switch (Number)
    {
    case 1:
        return dayInWeek::sat;
    case 2:
        return dayInWeek::sun;
    case 3:
        return dayInWeek::mon;
    case 4:
        return dayInWeek::tue;
    case 5:
        return dayInWeek::wed;
    case 6:
        return dayInWeek::thu;
    case 7:
        return dayInWeek::fri;

    }
}
void printDayOfNumber(dayInWeek dayRangeNumber)
{
    switch (dayRangeNumber)
    {
    case dayInWeek::sat:
        cout << "Saturday " << endl;
        break;
    case dayInWeek::sun:
        cout << "Sunday  " << endl;
        break;
    case dayInWeek::mon:
        cout << "Monday  " << endl;
        break;
    case dayInWeek::tue:
        cout << "Tuesday  " << endl;
        break;
    case dayInWeek::wed:
        cout << "Wednesday  " << endl;
        break;
    case dayInWeek::thu:
        cout << "Thursday  " << endl;
        break;
    case dayInWeek::fri:
        cout << "Friday  " << endl;
        break;

    }
}
int main()
{
    int Number = readDayInRange("Enter A Number Between 1 To 7 : ");
    dayInWeek check = checkDayInRange(Number);
    printDayOfNumber(check);
}