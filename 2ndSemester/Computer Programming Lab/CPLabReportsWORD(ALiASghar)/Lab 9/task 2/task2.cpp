#include<iostream>
using namespace std;
#define line cout<<endl;

void input_Values(int* ptr){

    cout<<"Enter twelve numbers";
    line
    line

    for(int i = 0; i<12; i++){
        cout<<"Enter number "<<i+1;
        line
        cin>>*(ptr + i);
    }
}

void output_Values(int* ptr){

   for(int i = 0; i<12; i++){
        if(i%3 == 0)
            line
        cout<<"Value "<<i + 1<<" = "<<*(ptr + i)<<" ";
    }
}

main(){

    int numbers[12];
    int* arr_ptr;

    arr_ptr = numbers;

    input_Values(arr_ptr);
    output_Values(arr_ptr);
}
