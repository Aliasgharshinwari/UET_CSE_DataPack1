#include<iostream>
using namespace std;

main(){

    int arr_1[5];
    int arr_2[5];
    int sum = 0;


    cout<<"Enter values for first array"<<endl;
    for(int i = 0; i < 5; i++){
        cin>>arr_1[i];
    }

    cout<<"Enter values for second array"<<endl;
    for(int i = 0; i < 5; i++){
        cin>>arr_2[i];
    }

    for(int i = 0, j = 0; i < 5 && j < 5; i++,j++){
        sum += arr_1[i] + arr_2[j];
    }

    cout<<"Sum = "<<sum;
}
