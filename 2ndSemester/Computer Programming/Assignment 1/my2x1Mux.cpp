#include<iostream>
using namespace std;

int main()
{

    int inputI0,inputI1;
    inputI0=5;
    inputI1=10;

    int outputF=0;
    int select=1;

    //2x1 MUX using Conditional Operator

    outputF=select?inputI1:inputI0;
    cout<<"Output="<<outputF;


    return 0;
}
