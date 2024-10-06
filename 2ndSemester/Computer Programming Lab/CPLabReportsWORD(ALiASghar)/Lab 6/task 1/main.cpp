#include<iostream>
using namespace std;

char grade(int marks){

    if(marks >= 90 && marks <=100)
        return 'A';

    else if(marks >= 80 && marks <=90)
        return 'B';

    else if(marks >= 70 && marks <=80)
        return 'C';

    else if(marks >= 60 && marks <=70)
        return 'D';

    else
        return 'F';
}

void show(){
    int marks = 0;
    int reg_No = 0;

    cout<<"Enter marks..";
    cin>>marks;

    cout<<"\nEnter registration number"<<endl;
    cin>>reg_No;

    cout<<"Your name is Ali Asghar"<<endl;
    cout<<"Your Registration No. is 21PWCSE"<<reg_No<<endl;
    cout<<"Your grade is "<<grade(marks);

}

main(){
    show();
}
