#include<iostream>
using namespace std;

void minmax(int arr[]){
    int cache_Var = 0;

    for(int i = 0; i < 4; i++){

        for(int j = i+1; j<4; j++){

            if(arr[i] < arr[j]){
                cache_Var = arr[i];
                arr[i] = arr[j];
                arr[j] = cache_Var;
            }
        }
    }
    cout<<"Maximum number is "<<arr[0]<<endl;
    cout<<"Minimum number is "<<arr[3];
}

main(){
    int numbers[4];

    for(int i = 0; i<4; i++){
        cout<<"Enter four numbers consecutively ";
        cin>>numbers[i];
    }

    minmax(numbers);
}
