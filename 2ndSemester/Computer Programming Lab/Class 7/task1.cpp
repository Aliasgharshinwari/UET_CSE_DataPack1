#include<iostream>

using namespace std;

int main(){
    int x = 0;
    int* ptr;

    ptr = &x;

    cout<<"Enter value"<<endl;
    cin>>x;

    for(int i = 0; i<5; i++){
        *(ptr) += 1;
    }
    cout<<*ptr;
    return 0;
}
