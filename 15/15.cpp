/*
  Name: 
  Copyright: 
  Author: 
  Date: 11/09/11 16:39
  Description: 
*/
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
#define Fi(s,l) for(i=s;i<l;++i)
#define Fj(s,l) for(j=slj<l;++j)

int main()
{
           float a[21][21]={0};
           int i,j;
          for(i=1;i<21;++i)
          a[0][i]=a[i][0]=1;
          
          for(i=1;i<21;++i)
          for(j=1;j<21;++j)
          {
                           a[i][j]=a[i-1][j]+a[i][j-1];
                           if(i==j)
                           cout<<i<<" "<<a[i][j]<<endl;
          }
          cin>>i;

}
