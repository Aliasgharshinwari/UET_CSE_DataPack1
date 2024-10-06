#include<iostream>
using namespace std;

#define a cout<<"28 Days"
#define b cout<<"30 Days"
#define c cout<<"31 Days"
main(){

    int n;

    cout<<"Enter month no. between 1-12"<<endl;
    cin>>n;

    if(n >= 1 && n <= 7){
         (n == 2) ? (a) : (n%2 ==0 )? (b) : (c);
    }

    else if(n >= 8 && n <= 12){
        (n%2 ==0 )? (c) : (b);
    }
    else
        cout<<"Please enter a valid number"<<endl;
}
