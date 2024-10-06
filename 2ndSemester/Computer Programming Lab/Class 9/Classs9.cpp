#include<iostream>
using namespace std;

#define line cout<<"\n";

struct fruits{
    int size = 0; //data members
    string color;
}
watermelon = {50, "green"} , banana;

main(){

    fruits apple  = {25,"Red"}; //object
    cout<<"Size = "<<apple.size;

    line

    cout<<"Color = "<<apple.color;

    line
    line

    fruits orange;

    orange.size = 15;
    orange.color = "Orange";

    cout<<"Size Of orange = "<<orange.size;

    line

    cout<<"Color Of orange = "<<orange.color;

    line
    line

    cout<<"Size Of watermelon = "<<watermelon.size;
    line

    cout<<"Color Of watermelon = "<<watermelon.color;
    line
}
