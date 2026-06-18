#include <iostream>
using namespace std;

int reverseNum(int n, int rev = 0){

    if (n == 0) 
        return rev;

    rev = rev * 10 + n % 10;

    return reverseNum(n / 10, rev);
}

int main(){

    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Reversed number = " << reverseNum(num);

    return 0;
    
}