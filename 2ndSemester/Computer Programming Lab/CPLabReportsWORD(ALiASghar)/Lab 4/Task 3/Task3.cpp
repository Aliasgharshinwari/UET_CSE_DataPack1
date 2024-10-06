#include<iostream>
using namespace std;
main()
{
 	int No_1,f = 1;
 	cout<<"Enter The no To Find its Factorial :";
 	cin>>No_1;

 	for(int i = 1; i <= No_1 ;i++){
 		f= i * f;
    }
    cout<<"\n\nThe Factorial Of "<<No_1<<" =  "<<f;
}
