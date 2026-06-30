#include <iostream>
using namespace std;

int main() {
    string str, result = "";
    bool visited[256] = {false};

    cout << "Enter string: ";
    cin >> str;

    for (char ch : str) {
        if (!visited[ch]) {
            visited[ch] = true;
            result += ch;
        }
    }

    cout << "After removing duplicates: " << result;

    return 0;
}