#include<iostream>
using namespace std; 


int main()
{
	int s0,s1,s2;
	
	cout<<"Enter the value for select line 0\n";
	cin>>s0;
	cout<<"Enter the value for select line 1\n";
	cin>>s1;
	cout<<"Enter the value for select line 2\n";
	cin>>s2;
	
	(s0==0? 	s1==0? s2==0?cout<<"I0":cout<<"I4" : s2==0?cout<<"I2":cout<<"I6":
    			s1==0? s2==0?cout<<"I1":cout<<"I5" : s2==0?cout<<"I3":cout<<"I7"); 
    			
    
	return 0;
}
