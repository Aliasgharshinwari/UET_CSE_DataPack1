#include<iostream>
// #include< >
#define line cout<<endl;// for endl
using namespace std;
main()
{
   int n;
   cout<<"Enter Number : ";
   cin>>n;
   for(int i=1; i<=n; i++){
   	for(int j=1; j<=(n-i); j++){
   		cout<<" ";
	   }
	   for(int j=1; j<=(2*i-1); j++){
	   	cout<<"*";
	   }
   line
}
for(int i=n; i>=1; i--){
   	for(int j=1; j<=(n-i); j++){
   		cout<<" ";
	   }
	   for(int j=1; j<=(2*i-1); j++){
	   	cout<<"*";
	   }
   line
}

}
