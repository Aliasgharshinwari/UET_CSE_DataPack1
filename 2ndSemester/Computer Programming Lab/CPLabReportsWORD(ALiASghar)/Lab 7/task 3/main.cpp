#include<iostream>
using namespace std;

void sum(int);

main(){
    int N = 0;

    cout<<"Enter N";
    cin>>N;

    sum(N);
}

void sum(int n){
    static int s = 0;

    if(n >= 0){
        s += n;
        n--;
        sum(n);
    }
    else{
        cout<<"Sum = "<<s;
        exit(0);
    }
}
