#include<iostream>
using namespace std;

#define line cout<<"\n";
#define mySize 5

main(){

    int intvar = 10;
    float floatVar = 11.11;
    void* ptrvoid;

    ptrvoid = &intvar;
    cout<<*(int *)ptrvoid<<endl;

    ptrvoid = &floatVar;
    cout<<*(float *)ptrvoid<<endl;
}
