#include<iostream>

using namespace std;

main(){

    int s2,s1,s0;

    cout<<"Enter s2 value"<<endl;
    cin>>s2;

    cout<<"Enter s1 Value"<<endl;
    cin>>s1;

    cout<<"Enter s0 Value"<<endl;
    cin>>s0;

    if(s2 == 0 && s1 == 0 && s0 == 0)
    cout<<"i0";
    else if(s2 == 0 && s1 == 0 && s0 == 1)
    cout<<"i1";
    else if(s2 == 0 && s1 == 1 && s0 == 0)
    cout<<"i2";
    else if(s2 == 0 && s1 == 1 && s0 == 1)
    cout<<"i3";
    else if(s2 == 1 && s1 == 0 && s0 == 0)
    cout<<"i4";
    else if(s2 == 1 && s1 == 0 && s0 == 1)
    cout<<"i5";
    else if(s2 == 1 && s1 == 1 && s0 == 0)
    cout<<"i6";
    else if(s2 == 1 && s1 == 1 && s0 == 1)
    cout<<"i7";
    else
    cout<<"Please Enter a valid input";
}




    /*
    if(s2 == 0){

        if(s1 == 0){

            if(s0 == 0)
            cout<<"i0";
            else{
            cout<<"i1";
                }
            }
        else if(s1 == 1){

            if(s0 == 0)
            cout<<"i2";
            else if(s1 == 1){
            cout<<"i3";
                }
                else{
        cout<<"Please Enter Correct value of s1"<<endl;
    }
            }
        else{
        cout<<"Please Enter Correct value of s1"<<endl;
            }

        }

    else if(s2 == 1){

            if(s1 == 0){

            if(s0 == 0)
            cout<<"i4";
            else{
            cout<<"i5";
                }
            }
        else if(s1 == 1){

            if(s0 == 0)
            cout<<"i6";
            else if(s0 == 1){
            cout<<"i7";
                }
                else{
        cout<<"Please Enter Correct value of s0"<<endl;
    }
            }
            else{
        cout<<"Please Enter Correct value of s1"<<endl;
    }

    }
    else{
        cout<<"Please Enter Correct value of s2"<<endl;
    }
*/
//}
