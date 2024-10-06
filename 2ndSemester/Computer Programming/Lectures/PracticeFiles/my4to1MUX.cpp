#include<iostream>
using namespace std;

int main()
{

    int inputI0,inputI1,inputI2,inputI3;
    inputI0=5;
    inputI1=10;
    inputI2=15;
    inputI3=20;
    int outputF=0;
    int s0=1;
    int s1=1;

    outputF=(s1==0? s0==0?inputI0:inputI1 :
             s0==0?inputI2:inputI3 );

    if (s0==0&&s1==0)
    {
         outputF=inputI0;
    }
    else if (s0==0&&s1==1)
    {
         outputF=inputI1;
    }
    else if (s0==1&&s1==0)
    {
         outputF=inputI2;
    }
    else
    {
         outputF=inputI3;
    }

    cout<<"Output="<<outputF;

    return 0;
}
