#include<iostream>
using namespace std;

void info();

main(){
    info();
}

void info(){
    static int i = 1;
    if(i <= 10){
        cout<<"Ali Asghar\n";
        cout<<"21PWCSE2059\n\n";
    }

    else
        exit(0);

    i++;
    info();
}
