#include<iostream>
using namespace std;

main(){

    int numbers[5];
    int keyValue;
    cout<<"Enter any five numbers"<<endl;

    for (int i = 0; i < 5; i++)
        cin>>numbers[i];

    cout<<"Enter key value for any number"<<endl;
    cin>>keyValue;

    for (int i = 0; i < 5; i++){
        if(keyValue == numbers[i]){
            cout<<"The index of the given number is: "<<i<<endl;
        }
    }

}
