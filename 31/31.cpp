/*
  Name: 
  Copyright: 
  Author: 
  Date: 11/09/11 16:39
  Description: 
*/
#include<iostream>
#include<fstream>
using namespace std;
#define Fi(s,l) for(i=s;i<l;++i)
#define Fj(s,l) for(j=slj<l;++j)
int a[]={5,4,3,2,1};
#define SIZE sizeof(a)/sizeof(int)

int tot(int k,int t)
{
 	static int count=0;
 	 for(int i=0;i<SIZE;++i)
 	 {
	  		 if(a[i]<=t)
	  		 {
	  		 if((k-a[i])>0)
	  		 {
			   
			  			   cout<<a[i]<<" ";
	  		 			   tot(k-a[i],a[i]);
			 }
	  		 else if(k-a[i]==0)
	  		 {
				   			   count=count+1;
				   			   cout<<a[i]<<endl;
				   			   
			 }
			 }
	 }
	 return count;
}

int main()
{
 	//int i;
 //	cin>>i;
 	cout<<tot(5,5)<<endl; 	

  system("pause");
}
