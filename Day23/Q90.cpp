#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool visited[256] = {false};

    for (char ch : str) {
        if (visited[ch]) {
            cout << "First repeating character: " << ch;
            return 0;
        }
        visited[ch] = true;
    }

    cout << "No repeating character found.";

    return 0;
}