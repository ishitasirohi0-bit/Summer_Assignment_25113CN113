#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int Num, OriginalNum, digit,count=0, sum=0;

    cout << "Enter a number: ";
    cin >> Num; 

    OriginalNum = Num;

    int temp = Num;

    while(temp != 0){
        temp /= 10;
        count++;
    }

    while(Num != 0){
        digit = Num % 10;
        sum += pow(digit, count);
        Num /= 10;
    }

    if(sum == OriginalNum){
        cout << OriginalNum << " is an Armstrong number." << endl;
    }
    else{
        cout << OriginalNum << " is not an Armstrong number." << endl;
    }

    return 0;

}