#include<iostream>
using namespace std;

main(){
    int s = 5;

    cout<<"Enter size of array"<<endl;
    cin>>s;

    int numbers[s];

    cout<<endl<<"Enter any "<<s<<" numbers"<<endl;

    for (int i = 0; i < s; i++)
        cin>>numbers[i];


    cout<<endl<<"Reversed form of above array of numbers is"<<endl;

    for (int i = 0; i < s; i++)
        cout<<numbers[(s-1)-i]<<endl;
}
