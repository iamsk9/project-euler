/*
  Name: 
  Copyright: 
  Author: 
  Date: 11/09/11 16:39
  Description: 
*/
//#include<stdio.h>
//#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
#define Fi(s,l) for(i=s;i<l;++i)
#define Fj(s,l) for(j=s;j<l;++j)

int main()
{
    ifstream file("input.txt");
    int i,j,k,l,a[20][20];
    char t,b,c;
    
    for(i=0;i<20;++i)
    {
    Fj(0,20)
    {
            t=file.get();
            b=file.get();
            c=file.get();
            l=t-48;
            k=b-48;     
            a[i][j]=10*l+k;
            //cout<<a[i][j]<<" ";        
    }
    cout<<endl;
    }
    int max=1,prod[4];
    for(i=0;i<17;++i)
    for(j=0;j<17;++j)
    {
                     prod[0]=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
                     prod[1]=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
                     prod[2]=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
                     if(i-3>0)
                     prod[3]=a[i][j]*a[i-1][j+1]*a[i-2][j+2]*a[i-3][j+3];
                     
                     for(l=0;l<4;++l)
                     {
                     //cout<<prod[i]<<" ";
                     if(max<prod[l])
                     max=prod[l];
                     }
                     cout<<endl;
    }
    cout<<max;
   
  system("pause");
}
