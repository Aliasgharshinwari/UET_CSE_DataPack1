#include<iostream>
#include<math.h>

using namespace std;

float grade(int marks){

    float marks2 = (float)marks;
    float percentage;

    percentage =((marks2/150) * 100);
    return percentage;
}

char grade(float percentage){



    if(percentage >= 90 && percentage <= 100 )
    return 'A';

    else if(percentage >= 80 && percentage <= 90 )
    return 'B';

    else if(percentage >= 70 && percentage <= 80 )
    return 'C';

    else if(percentage >= 50 && percentage <= 70 )
    return 'D';

    else
    return 'F';

}

void grade(){

    int marks = 0;
    float percentage = 0;

    cout<<"Enter marks..."<<endl;
    cin>>marks;

    grade(marks);

    percentage = grade(marks);
    cout<<"Pre Percentage is "<<percentage;

    grade(percentage);

    cout<<"Marks is ="<<marks<<endl;
    cout<<"Percentage is ="<<percentage<<endl;
    cout<<"Grade is ="<<grade(percentage);

}
main(){
    grade();
}
