#include<iostream>
using namespace std;

class human{

    public:
    string name;
    int height, weight, health;

    //Constructor
    human(){
        cout<<"Birth"<<endl;
        cout<<"Enter name"<<endl;
        cin>>name;
        height = 4;
        weight = 60;
        health = 100;
    }

    //Destructor
    ~human(){
        height = 4;
        weight = 60;
        health = 0;

        cout<<"Died";
    }

    void eat(int x){
        if(health >= 0 && health <=100)
            health += x;
    }

    void takeDamge(int x){
        if(health >= 0 && health <=100)
            health -= x;
    }

    void showStats(){
        cout<<"============Current Stats====================="<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Height ="<<height<<endl;
        cout<<"Weight ="<<weight<<endl;
        cout<<"Health ="<<health<<endl;
    }
};

main(){
    human ali;
    ali.showStats();
    ali.takeDamge(4);
    ali.showStats();
    ali.eat(2);
    ali.showStats();
}
