#include<iostream>
using namespace std;
 int main(){
 	
 	int n,a=0,b=1,c;           //arr[100]
 	cout<<"enter a no. of fibonacci term: ";
 	cin>>n;
 	cout<<a<<" "<<b<<" ";             //arr[0]=0.arr[1]=1
 	for(int i=2;i<n;i++)
 	{ 
 	  
	   	c=a+b;                   //arr[i]=arr[i-1]+arr[i-2]
	   	cout<<c<<" ";           
	   	a=b;
	   	b=c;
	   	
	   	
	 }
	 cout<<endl;
 	
 	return 0;
 }
