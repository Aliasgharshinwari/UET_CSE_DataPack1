#include<iostream>
using namespace std;

#define line cout<<"\n";

void MySwap(int*, int*);

//Alias

main(){

    int x = 0;
    int y = 20;

    cout<<"X value ="<<x;
    line
    cout<<"Y value ="<<y;

    line

    line
    MySwap(&x, &y);

    line
    cout<<"X value ="<<x;
    line
    cout<<"Y value ="<<y;
    line

}


void MySwap(int* p, int* q){

    if(*p == 0)
        cerr<<"Error";
    int temp = *p;
    *p = *q;
    *q = temp;

    line

    cout<<"P value ="<<*p<<endl;
    cout<<"Q value ="<<*q<<endl;

}
