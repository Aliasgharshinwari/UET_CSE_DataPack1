#include <iostream>

using namespace std;

main()
{
    float Temp_K;
    float Temp_C;
    float Temp_F;

    system("cls");
    cout << "Enter Temperature in Farhenheit..";
    cin >> Temp_F;

    Temp_C = (Temp_F - 32)/1.8;

    Temp_K = Temp_C + 273;

    cout<<"Temperature in Celsius is: "<<Temp_C<<endl;
    cout<<"Temperature in Kelvin is: "<<Temp_K<<endl;

    system("pause");
}