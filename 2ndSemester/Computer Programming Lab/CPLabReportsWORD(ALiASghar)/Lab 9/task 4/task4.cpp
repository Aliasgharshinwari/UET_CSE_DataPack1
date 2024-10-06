#include<iostream>
using namespace std;
#define line cout<<endl;

float average(float *p, int size){
    float ave =0;
    for(int i = 0; i < size; i++)
            ave = ave + *(p+i);

    return ave;
}

main(){

    float arr[5] = {2,7,3,2,8};
    cout<<"Average = "<<(average(arr,5))/5;
    line
}
