#include<iostream>
using namespace std;

float add(float,float);

main(){
    float a = 0, b =0;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;

    cout<<"Sum = "<<add(a,b);
}

float add(float x,float y){

    if(x == 0 )
        x = 1;

    if(y == 0)
        y = 1;

    int r = x + y;
    return r;
}
