#include <iostream>
using namespace std;

void readNumbers(int& Num1, int& Num2, int& Num3) {
    cout << "Enter The Number 1 Please : ";
    cin >> Num1;
    cout << "Enter The Number 2 Please : ";
    cin >> Num2;
    cout << "Enter The Number 3 Please : ";
    cin >> Num3;
}
int SumOf3Nums(int Num1, int Num2, int Num3) {
    int results = Num1 + Num2 + Num3;
    return results;
}
float calcAvg(int Num1, int Num2, int Num3) {
    return (float)SumOf3Nums(Num1, Num2, Num3) / 3.00 ;
}
void printNumbers(int results, float Avg) {
    cout << "The Sum Of This 3 Numbers Is : " << results << endl;
    cout << "The Avg Of This 3 Numbers Is : " << Avg << endl;

}
int main() {
    int Num1, Num2, Num3;
    readNumbers(Num1, Num2, Num3);
    printNumbers(SumOf3Nums(Num1, Num2, Num3), calcAvg(Num1, Num2, Num3));
    return 0;
}