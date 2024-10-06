#include <iostream>
#include <math.h>
using namespace std;

void roots(float a, float b, float c, float d){
    float r1,r2;
    cout<<"Roots:\n";
    if (d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2 = -(b + sqrt(d)) / (2*a);

        cout<<"R1 = "<<r1;
        cout<<"\nR2 = "<<r2;
    }
    else if(d==0){
        r1 = -(b) / (2*a);
        r2=r1;
        cout<<"R1 = R2 = "<<r1;
    }
    else{
        r1= -b /(2 * a);
        r2=sqrt(-d) / (2*a);

        cout<<"Roots are imaginary\n";
        cout<<"Real root, R1 = "<<r1;
        cout<<"\nImaaginary root, R2 = "<<r2;
    }
}

float deter(float a, float b, float c){
    float d=(b*b)-(4*a*c);
    return d;
}

main(){
    float a,b,c,d;
    int values[3];

    for(int i=0;i<3;i++){
        cout<<"Enter the values of a, b and c respectively ";
        cin>>values[i];
    }

    a = values[0];
    b = values[1];
    c = values[2];

    d = deter(a,b,c);
    cout<<"\nDeterminant ="<<d<<endl;
    roots(a,b,c,d);
}
