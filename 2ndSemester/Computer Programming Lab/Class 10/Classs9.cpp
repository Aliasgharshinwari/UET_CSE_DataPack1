#include<iostream>
using namespace std;

#define line cout<<"\n";

class rect{
    private:
        int width;
        int height;

    public:
        int area(){
            return width*height;
        }

        void setValues(int,int);
};

rect :: void setValues(int x, int y){
    width = x;
    height = y;
}

main(){

    rect R;
}
