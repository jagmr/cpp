
#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here

 int k;
  for(int i=1;i<=5;i++)
  {
     k=1;
      for(int j=1;j<=5;j++)
      {
          if(j<=i){
          cout<<k;
          k++;}
         else{cout<<" ";} 
	  }
   
       k=i;
       for(int j=6;j<=10;j++)
       {
         if(j>=11-i){ 
	     cout<<k;
		 k--;}
		 else
         cout<<" ";
		}
      cout<<endl;

     }
  return 0;
}
