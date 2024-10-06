#include<iostream>
using namespace std;

void populateArray(int* p){

    for(int i = 0; i<10; i++){
        cout<<"Enter value "<<i + 1<<endl;
        cin>>*(p + i);
    }
}

void displayArray(int* p){

    for(int i = 0; i < 10; i++)
        cout<<"Value "<<i + 1<<" = "<<*(p + i)<<endl;

}

main(){

    int arr[10];
    int* ptr;

    ptr = arr;

    populateArray(ptr);
    displayArray(ptr);
}
