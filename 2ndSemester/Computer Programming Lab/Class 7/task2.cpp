#include<iostream>

using namespace std;

int main(){
    string x = "";
    string y = "";

    string* ptr1;

    ptr1 = &x;

    cout<<"Enter your name"<<endl;
    cin>>x;

    cout<<"Enter your registration number"<<endl;
    cin>>y;

    cout<<"Name ="<<*ptr1<<endl;

    ptr1 = &y;

    cout<<"Registration Number ="<<*ptr1;

    return 0;
}
