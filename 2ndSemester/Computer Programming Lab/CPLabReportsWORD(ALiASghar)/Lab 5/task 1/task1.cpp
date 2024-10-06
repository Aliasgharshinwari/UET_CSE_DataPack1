#include<iostream>
using namespace std;

main(){

    string arr[2];

    cout<<"Enter your name and reg. No"<<endl;

    for(int i = 0; i < 2; i++){
        getline(cin,arr[i]);
   }

    cout<<"Your name and reg. No are"<<endl;

    for(int i = 0; i < 2; i++)
        cout<<arr[i]<<endl;
}
