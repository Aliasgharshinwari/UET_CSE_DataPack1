#include<iostream>
using namespace std;

void factorial(int64_t number){
    int64_t fac = 1;

    for(int i = 1; i <= number; i++)
        fac = fac * i;

    cout<<"Factorial is "<<fac;
}

int main(){
    int64_t num = 0;

    cout<<"Enter number"<<endl;
    again:
    cin>>num;
    if(num > 0)
        factorial(num);

    else{
        cout<<"\nPlease enter a value greater than 0"<<endl;
        goto again;
    }
}
