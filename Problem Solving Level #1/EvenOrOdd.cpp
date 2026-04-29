#include <iostream>
using namespace std;
enum enNumberType {
    Even = 1,
    Odd = 2
};
int readNumberType() {
    int Num;
    cout << "Enter Any Number Here : ";
    cin >> Num;
    return Num;
}
enNumberType CheckNumberType(int Num) {
    int Result = Num % 2;
    if (Result == 0) {
        return enNumberType::Even;
    }
    else {
        return enNumberType::Odd;
    }
}
void printNuberType(enNumberType NumberType) {
    if (NumberType == enNumberType::Even) {
        cout << "\nThe Number Is Even\n";
    }
    else {
        cout << "\nThe Number Is Odd\n";
    }
}


int main() {
    printNuberType(CheckNumberType(readNumberType()));
    return 0;
}