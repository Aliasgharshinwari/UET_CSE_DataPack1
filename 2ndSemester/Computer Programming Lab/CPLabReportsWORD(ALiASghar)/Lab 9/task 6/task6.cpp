#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a , int b){
    return a-b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a , int b){
    return a/b;
}

int calculator(int e, int f,int(*p)(int,int)){
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

    lbl:

    cout<<"Enter operator"<<endl;
    cin>>op;

    switch(op){

        case '+':
        m = calculator(x,y,add);
        break;

        case '-':
        m = calculator(x,y,sub);
        break;

        case '*':
        m = calculator(x,y,multiply);
        break;

        case '/':
        m = calculator(x,y,divide);
        break;

        default:
        cout<<"Please enter a valid operator\n\n";
        goto lbl;
        break;
    }

    cout<<"Result = "<<m;
}
