#include<iostream>
using namespace std;

main()
{
 	int No_1,No_2,R = 0;
 	cout<<"Enter No 1 :";
 	cin>>No_1;
 	cout<<"\nEnter No 2 :";
 	cin>>No_2;
 	for (int i = No_1; i <= No_2;i++){
 	if ( i % 2 == 0)
 		R = R+i;
	 }
     cout<<" \nThe SUM OF EVEN NOs ="<<R;
}
