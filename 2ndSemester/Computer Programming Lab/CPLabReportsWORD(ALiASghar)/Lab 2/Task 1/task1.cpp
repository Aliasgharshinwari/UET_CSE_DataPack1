#include <iostream>
using namespace std;

main(){
    float Temp_K, Temp_C, Temp_F;

    cout << "Enter Temperature in Farhenheit..";
    cin >> Temp_F;

    Temp_C = (Temp_F - 32)/1.8;

    Temp_K = Temp_C + 273;

    cout<<"Temperature in Celsius is: "<<Temp_C<<endl;
    cout<<"Temperature in Kelvin is: "<<Temp_K<<endl;
}
