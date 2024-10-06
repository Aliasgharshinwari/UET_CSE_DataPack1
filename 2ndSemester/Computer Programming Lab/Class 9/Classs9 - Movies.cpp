#include<iostream>
using namespace std;

#define line cout<<"\n";
struct t{
    float ratings;
};


struct movie{
    string title;
    int date;
    t rate;
};

void display(movie arrr[]){

    line
    cout<<".........Movies are......................................."<<endl;
    for(int i = 0; i < 3; i++){
        cout<<"The title of movie "<<i + 1<<" = "<<arrr[i].title<<endl;

        line
        cout<<"The date of movie "<<i + 1<<" = "<<arrr[i].date<<endl;

        line
        cout<<"The ratings of movie "<<i + 1<<" = "<<arrr[i].rate.ratings<<endl;
    }
}

main(){
     movie ar[3];

    for(int i = 0; i < 3; i++){
        cout<<"Enter the title of movie "<<i+1<<endl;
        cin>>ar[i].title;

        line
        cout<<"Enter the date of movie "<<i+1<<endl;
        cin>>ar[i].date;

        line

        cout<<"Enter the ratings of movie "<<i+1<<endl;
        cin>>ar[i].rate.ratings;
    }

    line
    line

    display(ar);
}
