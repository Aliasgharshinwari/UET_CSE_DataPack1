#include<iostream>
using namespace std;

#define line cout<<"\n";
#define mySize 10

main(){
    int arr[5] = {1,2,3,4,5};
    int *p;
    p = arr;
    //*p=10;

    cout<<*p<<endl;
    cout<<arr[0];

    *p = 10;
    p++;

    line

    cout<<*p;

    *p = 20;

    line

    p =&arr[2]; //3rd element of array

    cout<<*p;

    *p = 30;

    line

    p = arr + 3;

    cout<<*p;

    *p = 40;

    p = arr;

    line

    cout<<*(p + 4); //offset operator as a whole

    line
    line
    //cout<<*p;

    *(p + 4) = 50;

    for(int i = 0; i <5; i++)
        cout<<arr[i]<<endl;

    p = 0;
    p = NULL;
}
