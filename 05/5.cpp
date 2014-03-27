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
int lcm(int a,int b)
{
    int small=a<b?a:b;
    int i,j,k=1;
    for(i=2;i<=small;++i)
    {
                        if(a%i==0 && b%i==0)
                        {
                                  a/=i;
                                  b/=i;
                                  k*=i;
                                  --i;
                        }
    }
    k=k*a*b;
    return k;
}

int main()
{
    int i,j,k;
    j=lcm(2,3);    
    for(i=4;i<20;++i)
    {
                     j=lcm(j,i);
                     printf("%d ",j);
    
    }
    scanf("%d");
    

}
