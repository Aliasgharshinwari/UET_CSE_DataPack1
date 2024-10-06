#include <iostream>
using namespace std;

int powerFunction(int B, int E){

    static int power = 1;

    power = power * B;
    E--;

    if(E == 0)
        return power;

    else
        powerFunction(B,E);

}

main(){
    int b,e;

    cout<<"Enter base number: ";
    cin>>b;

    cout<<"Enter the exponent of the number: ";
    cin>>e;

    cout<<"Power of "<<b<<" raised to exponent "<<e<<" = "<<powerFunction(b,e);
}
