#include<iostream>
using namespace std;

main(){
    int n = 0;
    int* ptr;

    cout<<"Enter n"<<endl;
    cin>>n;

    ptr = &n;

    while(*ptr > 0){
        cout<<(*ptr)<<endl;
        (*ptr)--;
    }
}
