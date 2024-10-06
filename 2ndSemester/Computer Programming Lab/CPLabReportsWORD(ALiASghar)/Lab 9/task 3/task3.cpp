#include<iostream>
using namespace std;

void input_Values(string* ptr){

    cout<<"Enter your name and registration.\n";

    for(int i = 0; i<2; i++){
        cin>>*(ptr + i);
    }
}

void output_Values(string* ptr){

    cout<<"\nYour name and registration are:\n";

   for(int i = 0; i<2; i++){
        cout<<*(ptr + i)<<endl;
    }
}

main(){

    string info[2];

    string* pntr;

    pntr = info;

    input_Values(pntr);
    output_Values(pntr);
}
