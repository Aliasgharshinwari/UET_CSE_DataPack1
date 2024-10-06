#include<iostream>
using namespace std;
#define line cout<<endl;

int add_indexes(int* i1, int* i2){

    int sum;
    sum = *i1 + *i2;
    return sum;
}

main(){

    int arr[5];
    int a,b,c;
    int* ptr;

    ptr = arr;

    for(int i = 0; i<5; i++){
        cout<<"Enter value for element "<<i;
        line
        cin>>*(ptr + i);
    }

    cout<<"Enter value of a";
    line
    cin>>a;
    cout<<"Enter value of b";
    line
    cin>>b;

    c = add_indexes(arr + (a-1), arr + (b-1));

    arr[0] = c;

    cout<<"First element = "<<arr[0];
    line
}
