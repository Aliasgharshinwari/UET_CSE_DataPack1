#include<iostream>
using namespace std;

main()
{
	int B,E,R = 1;
	
	cout<<"Enter Base :";
	cin>>B;
	cout<<"\nEnter Exponent :";
	cin>>E;
	for(int i = E; i >= 1; i--)
	{
		R = R * B;
	}
	cout<<endl<<R;
}