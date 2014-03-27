#include<iostream>
#include<string>
using namespace std;
double t=0;
char* combos(char a[50],char b[50])
{
 if(strlen(b)==1)
 {
  				 t++;
 
 if(t==1000000) 				 
 cout<<a<<b<<endl;
 return a;
 
 }
 else
 {
 char c[50],e[50];
 int i,j;
 strcpy(c,a);
 strcpy(e,b);
 for(i=0;i<strlen(b);i++)
 {
 c[strlen(a)]=b[i];
 c[strlen(a)+1]=0;
 for(j=i;j<strlen(b)-1;j++)
 {
 e[j]=e[j+1];
 }
 e[j]=0;
 combos(c,e);
 strcpy(c,a);
 strcpy(e,b);

 }

 }
}
int main()
{
 char b[50]="0123456789";
 char a[50]="";
 combos(a,b);
 system("pause");
}
