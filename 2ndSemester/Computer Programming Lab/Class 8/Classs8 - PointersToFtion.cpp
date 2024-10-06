#include<iostream>
using namespace std;

int add(int x, int y){
    return x + y;
}

int sub(int a , int b){
    return a-b;
}

int multiply(int x, int y){
    return x * y;
}

int divide(int a , int b){
    return a/b;
}

int oper(int e, int f,int(*p)(int,int)){
    int res;


    res = (*p)(e,f);
    return res;
}


main(){
    int x,y,m;
    char op;

    cout<<"Enter number 1"<<endl;
    cin>>x;
    cout<<"Enter number 2"<<endl;
    cin>>y;

    cout<<"Enter operator"<<endl;
    cin>>op;

    switch(op){

    case '+':
    m = oper(x,y,add);
    break;

    case '-':
    m = oper(x,y,sub);
    break;

    case '*':
    m = oper(x,y,multiply);
    break;

    case '/':
    m = oper(x,y,divide);
    break;

    default:
    cout<<"Please enter a valid operator";
    break;
    }


    cout<<"m = "<<m;
}
