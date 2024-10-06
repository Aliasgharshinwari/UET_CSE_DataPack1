#include<iostream>
using namespace std;

main(){

    int numbers[10];
    double sum = 0;
    double average = 0;

    for(int i = 0; i<10; i++){
        cout<<"Enter number "<<i+1<<endl;
        cin>>numbers[i];
    }

    for(int i = 0; i<10; i++){
        sum += numbers[i];
    }

    average = sum/10;
    cout<<"Average is = "<<average;
}
