#include<iostream>
using namespace std;

main()
{
 	int No_1;
 	cout<<"Enter The No : ";
 	cin>>No_1;

 		if(No_1 >=1 && No_1 <=10){
 			for(int i = 1; i <= No_1; i++ )
 				cout<<"*";
        }
        else
            return 0;
 }
