#include<iostream>
using namespace std;

void printStars(int);
//int i;

main(){

    int i;
    for(i = 0; i < 5; i++){
        printStars(5);
    }
}

void printStars(int n){

    int i;
    for(i = 0; i < n; i++){
        cout<<"*";
    }
    cout<<endl;

}
