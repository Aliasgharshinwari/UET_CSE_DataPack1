#include<iostream>
#include<iomanip>

using namespace std;
#define line cout<<"\n";

struct student_Info{
    string name;
    int regNo;
    int semNo;
};

void displayData(student_Info data[], int total){

   cout<<left<< setw(10)<<"Name"<<left<<setw(10)<<"RegNo"<<left
         << setw(5)<<"SemNo";
         line

    for (int i = 0; i < total ; i++){
        cout << left << setw(10) << data[i].name
             << left << setw(10) << data[i].regNo
             << left << setw(5) << data[i].semNo;
             line
    }
}

void inputData(student_Info data[], int total){

  for(int i = 0; i<total; i++){
        cout<<"Enter the name, registration no. and semester no. of student "<<i+1;
        line
        cin>>data[i].name;
        cin>>data[i].regNo;
        cin>>data[i].semNo;
        line
    }
}

void searchData(student_Info data[], int total){
    int rNo;
    cout<<"Enter the registration no. of student to see his/her info "<<endl;
    cin>>rNo;

    for(int i = 0; i<total; i++){
        if(data[i].regNo == rNo){
            line
            cout<<left<< setw(10)<<"Name"<<left<<setw(10)<<"RegNo"<<left
            << setw(5)<<"SemNo";
            line
            cout << left << setw(10) << data[i].name
            << left << setw(10) << data[i].regNo
            << left << setw(5) << data[i].semNo;
            line
        }
    }
}
main(){
    const int totalStudents = 3;
    student_Info student_t;
    student_Info studList[totalStudents];

    inputData(studList, totalStudents);
    displayData(studList, totalStudents);
    searchData(studList, totalStudents);
}
