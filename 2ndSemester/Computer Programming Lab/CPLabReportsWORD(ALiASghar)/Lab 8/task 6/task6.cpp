#include<iostream>
using namespace std;

main(){
    int n = 0;
    int sum = 0;
    int* ptr;

    cout<<"Enter n"<<endl;
    cin>>n;

    ptr = &n;

    while(*ptr > 0){
        if(*ptr % 2 == 0){
            sum += *ptr;
            cout<<*ptr<<endl;
        }
    (*ptr)--;
    }

    cout<<"Sum = "<<sum;
}
