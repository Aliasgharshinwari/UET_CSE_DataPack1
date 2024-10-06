#include<iostream>
#include<math.h>

//Default values
//function overloading
//function template
//static variables

using namespace std;

int sum(int x = 1 , int y = 3){
    cout<<"This is int function"<<endl;
    return x+y;
    }

int sum(int x , int y, int z){
    cout<<"This is int function"<<endl;
    return x+y+z;
    }

float sum(float x , float y){
    cout<<"This is float function"<<endl;
    return x+y;
    }
template <class mytype>
mytype myfunction(mytype x, mytype y){
    return x + y;
}

void recursive(){
    static int x = 10;
    if(x > 0){
        cout<<"Still Inside function"<<endl;
        x--;
        recursive();
    }
    else{
        cout<<"Function exit"<<endl;
    }
}

main(){
    recursive();
}


