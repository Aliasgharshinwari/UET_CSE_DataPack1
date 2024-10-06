#include<iostream>
using namespace std;

void powerr(int B, int E){
    int res = 1;

    for(int i = 1; i <= E; i++)
        res = res * B;


    cout<<res;
}

main(){

    powerr(4,3);
}

