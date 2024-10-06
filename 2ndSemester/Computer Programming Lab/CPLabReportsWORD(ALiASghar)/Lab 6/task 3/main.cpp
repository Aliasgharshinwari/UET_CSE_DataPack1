#include<iostream>
using namespace std;

bool checkPrime(int a){


    for(int i = 1; i <= a/2; ++i){

        if(a%i == 0 && i != 1){
            return false;
        }
    }
    return true;
}

main(){
    int x;
    bool isPrime;
    cout<<"Enter a number";

    cin>>x;

    isPrime = checkPrime(x);

    if(isPrime)
        cout<<"Prime Number";
    else
        cout<<"Composite Number";
}
