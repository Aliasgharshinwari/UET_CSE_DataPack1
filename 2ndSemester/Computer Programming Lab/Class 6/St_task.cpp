#include <iostream>

using namespace std;


 float grade(int marks)
   {
      float marks2 = (float)marks;
    float per;

    per =((marks2/150) * 100);
    return per;
   }



   char grade(float per)
   {
       cout<<"\nPer function\n";
       if(per >= 90 && per <= 100)
       {
           return 'A';
       }
       else{
           return 'F';
       }
   }


 void grade()
{
    int marks = 0; float per = 0;
    cout<<"Enter Marks";
    cin>>marks;
    grade(marks);

    per = grade(marks);
    grade(per);
    cout<<"Entered marks ="<<marks;
    cout<<"\npercentage ="<<per<<endl;
     cout<<"grade ="<<grade(per);


}


int main()
{

    grade();
    return 0;
}
