#include<iostream>
#include<iomanip>
using namespace std;
#define line cout<<endl;

struct phone{
    int areaCode, exchange, number;
};

main(){

    phone P1 = {042,867,4982};
    phone P2;

    cout<<"Enter Your area code, exchange and number";
    line
    cin>>P2.areaCode;
    cin>>P2.exchange;
    cin>>P2.number;

    cout<<"My number is ("<<setfill('0')<<setw(3)<<
    P1.areaCode<<") "<<P1.exchange<<"-"<<P1.number;
    line
    cout<<"Your number is ("<<setfill('0')<<setw(3)
    <<P2.areaCode<<") "<<P2.exchange<<"-"<<P2.number;
    line
}
