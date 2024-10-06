#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter value of number 1 ";
    cin>>a;


    cout<<"Enter value of number 2 ";
    cin>>b;


    cout<<"Enter value of number 3 ";
    cin>>c;

    if(a > b){
            if(a > c){
                cout<<"number 1 is greatest";
            }
            else{
                cout<<"number 3 is greatest";
            }
    }
    else{
          if(b > c){
                cout<<"number 2 is greatest";
            }
            else{
                cout<<"number 3 is greatest";
            }
    }

    return 0;
}
