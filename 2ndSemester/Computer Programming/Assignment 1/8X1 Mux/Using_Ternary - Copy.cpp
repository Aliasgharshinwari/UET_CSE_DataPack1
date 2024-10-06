#include<iostream>
using namespace std;

main(){

    int I0 = 0;
    int I1 = 1;
    int I2 = 2;
    int I3 = 3;
    int I4 = 4;
    int I5 = 5;
    int I6 = 6;
    int I7 = 7;


    int s2=1;
    int s1=1;
    int s0 =1;

    int output=0;


    output = (s2 == 0) ? (s1 == 0) ? (s0 == 0) ? I0 : I1
      : (s0 == 0) ? I2 : I3 : (s1 == 0) ? (s0 == 0) ? I4 : I5 : (s0 == 0) ? I6 : I7;

    cout<<"Output = "<<output;

}
