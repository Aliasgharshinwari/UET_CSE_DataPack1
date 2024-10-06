#include<iostream>
using namespace std;
#define line cout<<"\n";

void funct(void *p){
    cout<<*(int *)p;
    line
    cout<<sizeof(p);
}

main(){
    int x = 1;
    char a = 'a';

    funct(&x);
    funct(&a);
}
