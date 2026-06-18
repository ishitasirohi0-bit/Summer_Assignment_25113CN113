#include <iostream>
#include <cmath>
using namespace std;


bool isArmstrong(int n) {

    int temporary = n;
    int digits = 0;

    while (temporary > 0) {
        temporary /= 10;
        digits++;
    }

    int sum = 0;
     temporary = n;
     
     
    while (temporary > 0) {

        int digit = temporary % 10;
        sum += pow(digit, digits);
        temporary /= 10;
    }

    return temporary == n;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}


