#include<iostream>
using namespace std;

main(){

    int numbers[12];

    cout<<"Enter twelve numbers\n\n";

    for(int i = 0; i<12; i++){
        cout<<"Enter number "<<i+1<<"\n";
        cin>>numbers[i];
    }

    for(int i = 0; i<12; i++){
        if(i==3 || i == 6 || i == 9)
            cout<<endl;
        cout<<"Value "<<i + 1<<" = "<<numbers[i]<<" ";
    }
}
