#include <iostream>
using namespace std;

int main(){
    int n, start, end ,i, j, count;
    cout << "Enter the range: ";    
    cin >> start >> end;

    for(i = start; i <= end; i++){
        int count = 0;
        for(j = 1 ; j <= i; j++){
            if(i % j == 0){
                count++;        
            }
            
        }
        if(count == 2){
            cout << i << " ";
        }
    }
    return 0;   
}