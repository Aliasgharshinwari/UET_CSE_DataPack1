#include<iostream>
using namespace std;

main()
{

    //Declaring and initializing input lines
    int inputI0 = 0,inputI1 = 1,inputI2 = 3,inputI3 = 3, inputI4 = 4, inputI5 = 5, inputI6 = 6, inputI7 = 7;

    //Declaring and initializing select lines
    int s2=0, s1=0, s0 =1;

    //Declaring and initializing output line
    int outputF=0;

    //Using If Else logic to implement 8x1 MUX

    (s2 == 0)
            ?(s1 == 0)
                ?(s0 == 0)
                 ?outputF = inputI0

                :
                    outputF = inputI1


            :
                ?(s0 == 0)
                outputF = inputI2

                :
                outputF = inputI3

    :
            ?(s1 == 0)
                ?(s0 == 0)
                outputF = inputI4

                :
                outputF = inputI5

            :
                (s0 == 0)?
                outputF = inputI6

                :
                outputF = inputI7;


    cout<<"Output = "<<outputF;
}
