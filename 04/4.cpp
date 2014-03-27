/*
  Name: 
  Copyright: 
  Author: 
  Date: 11/09/11 16:39
  Description: 
*/
#include<stdio.h>
#include<conio.h>
#define Fi(s,l) for(i=s;i<l;++i)
#define Fj(s,l) for(j=slj<l;++j)
int check(int k)
{
    int a[10],i,j;
    
    for(i=0;k;++i,k/=10)
    a[i]=k%10;
    for(j=0;j<i/2;++j)
    if(a[j]!=a[i-j-1])
    {
                     i=0;
    break;
    }
    return i;
}

int main()
{
    int i,j,k,max=0;
    for(i=100;i<=999;++i)
    {
               for(j=100;j<=999;++j)
               {
                          k=i*j;
                       //   printf("k=%d check=%d\n",k,check(k));
                          if(check(k))
                            if(k>max)
                             max=k;
               }
    }
    printf("%d",max);
    scanf("%d",&i);
}
