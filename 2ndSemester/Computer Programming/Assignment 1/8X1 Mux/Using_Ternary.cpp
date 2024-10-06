#include<iostream>
using namespace std;

main(){

    //Declaring and initializing input lines
    int inputI0 = 0,inputI1 = 1,inputI2 = 2,inputI3 = 3, inputI4 = 4, inputI5 = 5, inputI6 = 6, inputI7 = 7;


    //Declaring and initializing select lines
    int s2=1, s1=0, s0 =0;

    //Declaring and initializing output line
    int outputF=0;


    //Using Conditional Operator to implement 8x1 MUX
    outputF = (s2 == 0) ? (s1 == 0) ? (s0 == 0) ? inputI0 : inputI1
      : (s0 == 0) ? inputI2 : inputI3 : (s1 == 0) ? (s0 == 0) ? inputI4 : inputI5 : (s0 == 0) ? inputI6 : inputI7;

    //Displaying the output
    cout<<"Output="<<outputF;

}
