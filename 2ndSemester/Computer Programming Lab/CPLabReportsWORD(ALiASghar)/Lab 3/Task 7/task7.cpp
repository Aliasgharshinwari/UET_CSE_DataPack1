#include<iostream>
using namespace std;

main(){
    int d;
    cout<<"Enter day no. ";
    cin>>d;

    if(d == 1)
        cout<<"Monday";
    else if(d == 2)
        cout<<"Tuesday";
    else if(d == 3)
        cout<<"Wednesday";
    else if(d == 4)
        cout<<"Thursday";
    else if(d == 5)
        cout<<"Friday";
    else if(d == 6)
        cout<<"Saturday";
    else if(d == 7)
        cout<<"Sunday";
    else
        cout<<"Enter a valid day number between 1-7"<<endl;
}
