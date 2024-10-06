#include <iostream>
using namespace std;

int fibonacci(int N){
    int c;
    static int a=0,b=1;
    if(a==0)
        cout<<a<<"\n"<<b<<"\n";
    c=a+b;
    a=b;
    b=c;
    cout<<c<<"\n";

    if(c>N)
        return 0;
    else
        fibonacci(N);
}

main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fibonacci(n);
}
