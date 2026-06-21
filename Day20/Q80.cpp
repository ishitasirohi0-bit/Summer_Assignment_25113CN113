#include <iostream>
using namespace std;

int main() {
    int a[3][3];

    cout << "Enter matrix:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> a[i][j];

    for(int j=0;j<3;j++) {
        int sum = 0;
        for(int i=0;i<3;i++)
            sum += a[i][j];

        cout << "Column " << j+1 << " Sum = " << sum << endl;
    }

    return 0;
}