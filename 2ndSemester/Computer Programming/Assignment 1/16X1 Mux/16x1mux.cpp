#include<iostream>
using namespace std;

main()
{

    //Declaring and initializing input lines
    int inputI0 = 0,inputI1 = 1,inputI2 = 3,inputI3 = 3, inputI4 = 4, inputI5 = 5, inputI6 = 6, inputI7 = 7,
     inputI8 = 8,inputI9 = 9,inputI10 = 10,inputI11 = 11, inputI12 = 12, inputI13 = 13, inputI14 = 14, inputI15 = 15;

    //Declaring and initializing select lines
    int s3 = 0, s2=0, s1=0, s0 =1;

    //Declaring and initializing output line
    int outputF=0;

    label:

    cout<<"Enter s3 value"<<endl;
    cin>>s3;

    cout<<"Enter s2 value"<<endl;
    cin>>s2;

    cout<<"Enter s1 Value"<<endl;
    cin>>s1;

    cout<<"Enter s0 Value"<<endl;
    cin>>s0;
    //Using If Else logic to implement 8x1 MUX

    if(s3 == 0){

        if(s2 == 0){
                if(s1 == 0){
                    if(s0 == 0)
                    outputF = inputI0;

                    else
                    outputF = inputI1;
                }

                else{
                    if(s0 == 0)
                    outputF = inputI2;

                    else
                    outputF = inputI3;
                }
        }
        else{
                if(s1 == 0){
                    if(s0 == 0)
                    outputF = inputI4;

                    else
                    outputF = inputI5;
                }
                else{
                    if(s0 == 0)
                    outputF = inputI6;

                    else
                    outputF = inputI7;
                }
        }

    }

    else{
    if(s2 == 0){
                if(s1 == 0){
                    if(s0 == 0)
                    outputF = inputI8;

                    else
                    outputF = inputI9;
                }

                else{
                    if(s0 == 0)
                    outputF = inputI10;

                    else
                    outputF = inputI11;
                }
        }
        else{
                if(s1 == 0){
                    if(s0 == 0)
                    outputF = inputI12;

                    else
                    outputF = inputI13;
                }
                else{
                    if(s0 == 0)
                    outputF = inputI14;

                    else
                    outputF = inputI15;
                }
        }

    }



    cout<<"Output = "<<outputF<<endl;
    goto label;
}
