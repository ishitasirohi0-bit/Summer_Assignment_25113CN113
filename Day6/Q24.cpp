#include <iostream>
using namespace std;

int main(){

    int x, n;
    long long result = 1;

    cout << "Enter the base (x): ";
    cin >> x;

    cout << "Enter the exponent (n): ";
    cin >> n;

    for (int i = 1; i<= n; i++) {
        result *= x;
    }

    cout<< "Answer= " << result;
    return 0;
}