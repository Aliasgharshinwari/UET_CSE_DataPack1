#include<iostream>
using namespace std;

main(){

    struct student_Info{
        string name;
        int rollNo;
    };

    student_Info studList[2];

    for(int i = 0; i<2; i++){
        cout<<"Enter the name and roll no. of student "<<i+1<<endl;
        cin>>studList[i].name;
        cin>>studList[i].rollNo;
        cout<<endl;
    }

    cout<<"Name and Roll No.s of students are"<<endl;
    cout<<"Student # \tName \tRoll No"<<endl;

    for(int i = 0; i<2; i++){
        cout<<"Student "<<i+1<<"\t";
        cout<<studList[i].name<<"\t";
        cout<<studList[i].rollNo<<endl;
    }
}
