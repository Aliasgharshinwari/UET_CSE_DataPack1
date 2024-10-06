#include <iostream>
using namespace std;

int64_t re(int64_t);

main(){
    int64_t num =0;
    int64_t fact = 1;
    cout<<"Enter number"<<endl;
    cin>>num;

    fact = re(num);
    cout<<"Factorial = "<<fact;

}

int64_t re(int64_t n){

    if (n==0 || n==1)
        return 1;

    else
        return n*re(n - 1);
}
