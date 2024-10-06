#include<iostream>

using namespace std;

main(){
    int row ,col, n;

    cout<<"Enter no. of rows"<<endl;
    cin>>n;

    for(row = 1; row <= n ; row++){

        for(col= 1; col <= row; col++){

            if(col == 1 || col == row - 1)
            cout<<"*";
            else
            cout<<" ";
        }


        cout<<endl;
    }
}
