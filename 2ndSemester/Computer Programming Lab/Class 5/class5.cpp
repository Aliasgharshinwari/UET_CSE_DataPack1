#include<iostream>
#include<math.h>

using namespace std;

void check(int, int);
int myFunc(int, int); //Declaration

int area(int l, int b){
    return l*b;
}

struct person
{
   int ID = 0;
   string name;
};

int main(){

    person bill;
    system("cls");
    bill.ID = 12;
    bill.name = "Bill";
    
    int x = 0, y = 0,result = 0;
    //cout<<"This is main"<<endl;
    cout<<"Enter l and w"<<endl;
    cin>>x>>y;
    result = area(x,y);
    cout<<"Area is "<<result;
    //20th June

//    cout<<"Sum is: "<<endl;
//    int result = myFunc(2,3);

    return 0;

}

//Definition

int myFunc(int x, int y){

    return x + y;
}

void check(int a, int b){

    if(a == 0 || b == 0){
        cout<<"ONe is zero";
    }
    else{
        cout<<"the sum of the entered values is "<<myFunc(a,b);

    }
}



