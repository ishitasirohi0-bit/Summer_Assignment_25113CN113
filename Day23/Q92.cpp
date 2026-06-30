#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    int freq[256] = {0};

    for (char ch : str)
        freq[ch]++;

    char maxChar;
    int maxFreq = 0;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = i;
        }
    }

    cout << "Maximum occurring character: " << maxChar;

    return 0;
}