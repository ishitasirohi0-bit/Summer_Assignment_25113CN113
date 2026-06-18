#include <iostream>
using namespace std;    

int main(){
    int n, a=0, b=1, c;

    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci Term: ";
   
    if(n == 1){
        cout << a << endl;
    }


    else{
    for(int i=2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    cout << a << endl;
}
    return 0;
}