#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], mul[2][2] = {0};

    cout << "Enter first matrix:\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> b[i][j];

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            for(int k=0;k<2;k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Product Matrix:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++)
            cout << mul[i][j] << " ";
        cout << endl;
    }

    return 0;
}