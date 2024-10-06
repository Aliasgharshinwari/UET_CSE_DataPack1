#include<iostream>
using namespace std;

void swapValues(int*,int*);

main(){
    int a = 0, b =0;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;

    swapValues(&a, &b);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
}


void swapValues(int* x, int* y){
    int temp = 0;

    temp = *x;
    *x = *y;
    *y = temp;
}

