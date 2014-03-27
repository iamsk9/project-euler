/*
  Name: 
  Copyright: 
  Author: 
  Date: 11/09/11 16:39
  Description: 
*/
#include<iostream>
#include<fstream>
#include<strings.h>
#include<string.h>
#include<iomanip>
#include<algorithm>
using namespace std;
#define Fi(s,l) for(i=s;i<l;++i)
#define Fj(s,l) for(j=slj<l;++j)

int main()
{
  ifstream file("data.txt");
  string x,y;
  file>>y;
  char name[20];
  cout<<strlen(&y[0]);
   long double k=1;
  long double temp=0;
  long double sum=0;
//  cout<<range(double);

string str,;


getline(file,str);
while ( file ) {
   y += str;
   getline(file,str);
}



  for( long double i=0;i<y.size();++i)
  {
   	  
   		if(y[i]==',')
	       {
	         sum+=(temp*k);
  		     temp=0;
		    k++;
		   }
         if(y[i]>='A' && y[i]<='Z')
			  {
			   		  
			   		  temp+=(y[i]-64);
			   		  
			  }
  }
  //cout<<k<<endl
  cout<<temp<<endl;
  cout<<k<<endl;
  sum+=(temp*k);
  cout<<fixed<<sum<<endl;;
  system("pause");
}
