#include<iostream>
#define line cout<<endl;// for endl
using namespace std;

void minimax(int myarr[], int n){
	int max=0;

	for(int i=0 ; i<n; i++){
		if(myarr[i]>myarr[0])
            max=myarr[i];}

	for(int i=0 ; i<n; i++){
	if(myarr[i]<myarr[0])
        myarr[0]=myarr[i];
    }
	cout<<"The max is : "<<max;line
	cout<<"The min is : "<<myarr[0];
}

main(){
   int n;
   cout<<"Enter Size of Array : "; cin>>n;
   int myarr[n];
   for(int i=0 ; i<n; i++){
   	cout<<"Enter Value "<<(i+1)<<" : ";
   	cin>>myarr[i];
   	}
   minimax(myarr, n);
}
