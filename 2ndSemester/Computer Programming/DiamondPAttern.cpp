#include<iostream>

using namespace std;

int main(){
    int row ,col, spa, n;

    cout<<"Enter no. of rows"<<endl;
    cin>>n;

    for(row = 1; row <= n ; row++){

          for(spa = 1; spa <= n - row; spa++){
            cout<<" ";
        }

        for(col= 1; col <= 2*row-1; col++){
            cout<<"*";
        }


        cout<<endl;
    }

    for(row = n -1; row >= 1 ; row--){

        for(spa = 1; spa <= n - row; spa++){
            cout<<" ";
        }

        for(col= 1; col <= 2*row-1; col++){
            cout<<"*";
        }


        cout<<endl;
    }
    return 0;
}
