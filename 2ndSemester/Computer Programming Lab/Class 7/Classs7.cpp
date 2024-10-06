#include<iostream>

using namespace std;

#define line cout<<"\n";
#define mySize 10

main(){
    const int i = 0;
    int x = 0;
    int z = 0;

    int* y;
    int* q;

    y = &x; //&(Ampersand Sign) means address of x

    ++(*y); //* means deferencing operator
    cout<<&x;
    line
    cout<<&x;
    line
    cout<<*y;
}
