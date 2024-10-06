#include<iostream>

using namespace std;

main(){
    int row ,col, spa, j, n;

    cout<<"Enter no. of rows"<<endl;
    cin>>n;

    for(row = 1; row <= n ; row++){

        for(spa = 1; spa <= n - row; spa++){
            cout<<" ";
        }
        if(row == 1 || row == n){
        for(col= 1; col <= 2*row-1; col++){
           cout<<"*";
            }
        }
        else{
            cout<<"*";
              for(j= 1; j <= 2*row-3; j++){
                cout<<" ";
            }
            cout<<"*";

        }
        cout<<endl;
    }

}
