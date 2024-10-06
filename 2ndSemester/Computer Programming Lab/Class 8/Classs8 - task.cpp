#include<iostream>
using namespace std;

float average(float *p, int size){
    float ave =0;
    for(int i = 0; i < size; i++)
            ave = ave + *(p+i);

    return ave;
}

main(){

    float arr[5] = {1,2,3,4,2};
    cout<<"Average = "<<(average(arr,5))/5<<endl;
}
