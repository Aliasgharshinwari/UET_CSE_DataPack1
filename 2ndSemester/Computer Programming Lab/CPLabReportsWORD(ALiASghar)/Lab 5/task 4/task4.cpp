#include<iostream>
using namespace std;

main(){

    int numbers[5];

    cout<<"Enter any five numbers"<<endl;

    for (int i = 0; i < 5; i++){
        cout<<"Enter number "<<i + 1<<endl;
        cin>>numbers[i];
    }

    for (int i = 0; i < 5; i++){
        if (numbers[0] < numbers[i] )
            numbers[0] = numbers[i];
    }
     cout<<"Maximum number is "<<numbers[0];
}
