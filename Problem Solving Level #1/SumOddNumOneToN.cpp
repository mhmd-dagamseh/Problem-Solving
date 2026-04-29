#include <iostream>
using namespace std;
enum TypesNumber {
    even = 1,
    odd = 2
};
int readNumber()
{
    int Num;
    cout << "Enter A Random Number : ";
    cin >> Num;
    return Num;
}
TypesNumber checkNumberOddOrEven(int Num)
{
    if (Num % 2 != 0) {
        return TypesNumber::odd;
    }
    else {
        return TypesNumber::even;
    }
}
int SumOfOddNumbers(int Num)
{
    int Sum = 0;
    for (int i = 1; i <= Num; i++) {
        if (checkNumberOddOrEven(i) == TypesNumber::odd) {
            Sum += i;
        }
    }
    return Sum;
}

int main()
{
    int Num = readNumber();
    cout << SumOfOddNumbers(Num);

}