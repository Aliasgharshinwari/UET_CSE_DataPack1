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

    int s0=0;
    int s1=0;
    int s2 =0;


 /*
    if(s0 == 0)
    {
        if(s1 == 0)
        {
            if(s2 == 0)
            outputF = 0;


            else
            outputF = 1;
        }

        else
        {
            if(s2 == 0)
            outputF = 2;


            else
            outputF = 3;
        }
    }
    else
    {
            if(s1 == 0)
        {
            if(s2 == 0)
            outputF = 4;


            else
            outputF = 5;
        }

        else
        {
            if(s2 == 0)
            outputF = 6;


            else
            outputF = 7;
        }
    }
*/

      outputF = (s0 == 0) ?
                    (s1 == 0) ?
                        (s2 == 0) ? 0
            : 1
        :
            (s2 == 0) ? 2
            : 3

            :

            (s1 == 0) ?
             (s2 == 0) ? 4
            : 5
        :
            (s2 == 0) ? 6
            : 7;


    cout<<"Output="<<outputF;

    return 0;
}
