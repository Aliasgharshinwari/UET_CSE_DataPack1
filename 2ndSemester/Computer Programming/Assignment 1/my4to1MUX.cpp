#include<iostream>
using namespace std;

int main()
{

    int inputI0,inputI1,inputI2,inputI3, inputI4, inputI5, inputI6, inputI7;
    inputI0=0;
    inputI1=1;
    inputI2=2;
    inputI3=3;
    inputI4=4;
    inputI5=5;
    inputI6=6;
    inputI7=7;

    int outputF=0;
    string out;

    int s0=0;
    int s1=0;
    int s2 =0;

 //   outputF=(s1==0 ? s0==0 ? inputI0 : inputI1 : s0==0?inputI2:inputI3 );
 /*   outputF = s0 == 0 ?  //If s0 == 0

               s1 == 0 ? //   if s1 == 0

                s2 == 0 ? inputI0 //if s2 == 0 ==> inputI0

               : inputI1  //else

                   : inputI2 //else

            : inputI3 //else
;
*/

/*
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
*/
    cout<<"Output="<<outputF;

    return 0;
}
