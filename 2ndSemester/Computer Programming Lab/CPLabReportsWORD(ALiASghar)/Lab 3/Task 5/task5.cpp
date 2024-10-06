#include<iostream>
using namespace std;

main(){

    int n;

    cout<<"Enter any number "<<endl;
    cin>>n;

    if(n%5 == 0 && n%7 == 0 && n%11 != 0)
        cout<<"Multiple of 5, Divisible by 7 and not divisible by 11"<<endl;

    else
        cout<<"All three conditions do not match"<<endl;
}
