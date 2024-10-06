#include<iostream>
using namespace std;

#define line cout<<"\n";

class rectangle{

    private:
        int width;
        int height;

    public:
        int area(){
            return width*height;
        }

        //Constructor
        rectangle(int x, int y){
            width = x;
            height = y;
        }

   // rect(){
   //     width = 5;
   //     height = 5;
   //     cout<<"Contructor Overload"<<endl;
   // }

    //Destructor
    ~rectangle(){
    cout<<"This is destructor";
    }
};

rectangle::rect(){
    width = 5;
    height = 5;
}

main(){
    rectangle R(4,4);
    cout<<R.area()<<endl;
}
