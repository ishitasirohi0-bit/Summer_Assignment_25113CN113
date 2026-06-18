#include <iostream>
using namespace std;

int main(){

    int n, largest=0;

    cout<<"Enter the number: ";
    cin>>n;

    for(int i=2; i<=n;i++){

        if(n%i==0){
            int count=0;

            for(int j=1; j<=i; j++){
                if(i%j==0){
                    count++;
                }
            }

                if(count==2){
                    largest=i;
                }
            }
            
        
    }

    cout<<"The largest prime factor of "<<n<<" is: "<<largest;

    return 0;
}