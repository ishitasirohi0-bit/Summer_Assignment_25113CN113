#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int temporary = n;
    int reversed = 0;

    while (n > 0) {

        reversed = reversed * 10 + n % 10;
        n /= 10;

    }

    return temporary == reversed;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }

    return 0;
}