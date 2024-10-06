#include<iostream>
using namespace std;
#define line cout<<"\n";

struct point{
    int h,w;
    int x,y;
};

void display(point p){

    for(int i = 0; i < p.y; i++){

        for(int j = 0; j < p.x; j++){
            cout<<" * ";
        }
    line
  }
}

main(){
    point P1;

    cout <<"Enter width of rectangle ";
    line
    cin>>P1.x;

    cout <<"Enter height of rectangle ";
    line
    cin>>P1.y;

    display(P1);
}
