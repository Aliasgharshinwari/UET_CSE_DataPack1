#include<iostream>
using namespace std;

int add(int x, int y){
    return x + y;
}

int oper(int e, int f,int(*p)(int,int)){
    int res;
    res = (*p)(e,f);
    return res;
}

int operation(int g, int h, int(*p)(int , int)){

}


main(){
    int x,y,m;

    cout<<"m = "<<m;
}
