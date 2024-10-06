#include<iostream>
using namespace std;

main()
{
	int No;
	cout<<"Enter The No To Display its Table :";
	cin>>No;

	for(int i = 1; i <= 10; i++)
		cout<<No<<" x "<<i<<" = "<<No*i<<endl;
}
