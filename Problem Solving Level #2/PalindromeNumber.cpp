#include<iostream>
#include<cmath> 
using namespace std;

int readPossitiveNumber(string Message)
{
    int Number;
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int findCountOfNumbers(int Frequency, int Number) {
    int Remainder = 0;
    int Counter = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number /= 10;
        if (Frequency == Remainder) {
            Counter++;
        }
    }
    return Counter;
}
int getCountOfNumbers(int Number) {
    int Count = 0;
    for (int i = 0; i < 10; i++) {
        Count += findCountOfNumbers(i, Number);
    }
    return Count;
}
int findPalindromeNumber(int Number)
{
    int Count = getCountOfNumbers(Number);
    if (Count % 2 == 0) return -1;

    int midPos = Count / 2;
    int divisor = pow(10, midPos);
    int midNumber = (Number / divisor) % 10;
    return midNumber;
}
int getSecondPalindrome(int Number) {
    int midNumber = findPalindromeNumber(Number);
    if (midNumber == -1) return -1;  // لا يمكن بناء متماثل لأعداد زوجية الأرقام

    int secondPalindrome = 0;
    
    for (int i = 1; i <= midNumber; i++) {
        secondPalindrome = secondPalindrome * 10 + i;
    }
   
    for (int i = midNumber - 1; i >= 1; i--) {
        secondPalindrome = secondPalindrome * 10 + i;
    }
    return secondPalindrome;
}
bool isPalindromeNumber(int Number) {
    int secondPalindrome = getSecondPalindrome(Number);
    if (secondPalindrome == -1) return false;
    return (Number == secondPalindrome);
}
void printResult(int Number) {
    bool Result = isPalindromeNumber(Number);
    if (Result) {
        cout << "\n\n The Number Is A Palindrome." << endl;
    }
    else
        cout << "\n\n The Number Is Not A Palindrome." << endl;
}
int main()
{
    int Number = readPossitiveNumber("Enter A Positive Number Please : ");
    printResult(Number);
}