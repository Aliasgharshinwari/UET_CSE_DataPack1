#include <iostream>

using namespace std;

#define PI 3.14

int main()
{
    int x;
    system("cls");

    //Compound Assignments
    
    x += 1; //normal compound assignment -->Two steps at one line
   // x = x + 1; //Non Compound assignment
    cout<<x++<<endl; //Post Increment
    cout<<++x<<endl; //Pre Increment

    system("pause");
    return 0;
}