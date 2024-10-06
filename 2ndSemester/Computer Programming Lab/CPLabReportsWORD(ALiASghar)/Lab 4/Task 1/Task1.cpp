#include <iostream>
using namespace std;

main()
{
	float x = 0, y = 0, r = 0;
	char OP;
	while (1)
	{
		cout<<"Enter No 1:"<<endl;
		cin>>x;
		cout<<"Enter The operator :"<<endl;
		cin>>OP;
		cout<<"Enter No 2:"<<endl;
		cin>>y;

		switch (OP)
		{
		case '+':
			r = x + y;
			cout<<"The Sum is = "<<r<<endl;
			break;
		case '-':
			r = x - y;
			cout<<"The Sub is = "<<r<<endl;
			break;
		case '*':
			r = x * y;
			cout<<"The Product is = "<<r<<endl;
			break;
		case '/' :
			r = x / y;
			cout<<"The Quotient is = "<<r<<endl;
			break;

		default:
			cout<<"\nINVALID operator ENTERED"<<endl;
		}
	}
}
