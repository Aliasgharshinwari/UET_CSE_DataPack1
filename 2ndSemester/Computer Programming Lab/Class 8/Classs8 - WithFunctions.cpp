#include<iostream>
using namespace std;

#define line cout<<"\n";

void sum(int *x, int *y){
    *x = *x + *y;

    x = NULL;
    y = NULL;
}

main(){

    int a,b;

    cout<<"Enter values of a and b"<<endl;
    cin>>a>>b;

    cout<<"a = "<<a<<" b = "<<b;
    sum(&a,&b);

    line
    cout<<a;

}


//void sum(&x,&y){
//}
//main(){
//}
