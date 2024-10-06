#include<iostream>
using namespace std;

#define line cout<<"\n";
#define mySize 5

void PrintArray(int a[]);

main(){
    int arr[mySize] = {2,321,32,12,32};
    PrintArray(arr);
}


void PrintArray(int a[]){

    for(int i = 0; i<mySize; i++){
        cout<<"Printing Array By index";
        cout<<"["<<i<<"] ="<<*a<<endl;
        a++;
    }
}
