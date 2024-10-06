#include<iostream>
using namespace std;

main(){
    int x,y,sum;
    int* ptr;
    ptr = &sum;

    cout<<"Enter number 1"<<endl;
    cin>>x;

    cout<<"Enter number 2"<<endl;
    cin>>y;

    sum = x + y;

    cout<<"Sum is "<<*ptr;
}
