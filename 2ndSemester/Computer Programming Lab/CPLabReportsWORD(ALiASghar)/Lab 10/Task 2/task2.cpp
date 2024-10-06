#include<iostream>
#include<iomanip>
using namespace std;
#define line cout<<"\n";

struct movie{
    string title;
    int year;
};

void display(movie arrr[]){

    cout<<".........Entered Movies are.......................................";
    line

    cout<<left<< setw(10)<<"Name"<<left<<setw(10)<<"Release Year";
         line

    for (int i = 0; i < 3 ; i++){
        cout << left << setw(10) << arrr[i].title
             << left << setw(10) << arrr[i].year;
             line
    }
}

main(){
    movie ar[3];

    for(int i = 0; i < 3; i++){
        cout<<"Enter the title of movie "<<i+1;
        line
        cin>>ar[i].title;
        line
        cout<<"Enter the release year of movie "<<i+1;
        line
        cin>>ar[i].year;
        line
    }

    line
    display(ar);
}
