#include<iostream>
using namespace std;

main(){
    int a =0;
    int* p;

    p = &a;

    cout<<"Enter value of a"<<endl;
    cin>>a;

    for(int i = 0; i < 5; i++)
        *p += 1;


    cout<<"a = "<<*p;
}
