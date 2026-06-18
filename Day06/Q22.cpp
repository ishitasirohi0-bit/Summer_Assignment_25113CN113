#include <iostream>
using namespace std;

int main(){
    int binary, digit, base=1, decimal=0;

    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary > 0) {
        digit = binary % 10;
        decimal += digit * base;
        binary /= 10;
        base *= 2;
    }

    cout << "Decimal representation: " << decimal;

    return 0;
}