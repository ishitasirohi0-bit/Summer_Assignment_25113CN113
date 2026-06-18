#include <iostream>
#include <cmath>
using namespace std;

int main(){


    int start,end;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are: ";

    for(int num = start; num <= end; num++){
        int OriginalNum = num;
        int digit, count=0, sum=0;

        int temp = num;

        while(temp != 0){
            temp /= 10;
            count++;
        }
 
        temp = num;
        while(temp != 0){
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == OriginalNum){
            cout << OriginalNum << " ";
        }
    }
        return 0;
}