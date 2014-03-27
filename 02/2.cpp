/*
  Name: 
  Copyright: 
  Author: 
  Date: 11/09/11 16:39
  Description: prob 2
*/
#include<stdio.h>
#include<conio.h>
#define Fi(s,l) for(i=s;i<l;++i)
#define Fj(s,l) for(j=slj<l;++j)

int main()
{
    int a[100000],i,j,sum=0;
    a[0]=1;
    a[1]=2;
    sum+=a[1];
    for(i=0;;++i)
    {
     a[i+2]=a[i+1]+a[i];
     if(a[i+2]<=4000000)
     {
                        if(!(a[i+2]%2))
                        sum+=a[i+2];
     }        
     else
     {
         break;
     }    
    }
    printf("%d\n",sum);
    scanf("%d",&i);
    //system("pause");
}
