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

int main()
{
    ifstream file("input.txt");
    int a[1000],i,j,temp;
    char x,y,z;
    string str;
    for(i=0;i<1000;)
    {
      file>>str;
      for(j=0;str[j]!=EOF;j+=2)
      {
          x=str[j];
          y=str[j+1];
          
          a[i++]=(x-48)*10+(y-48);
      }
    }
    for(j=0;j<i;++j)
    cout<<a[j]<<" ";
    cout<<endl;
    system("pause");
  
}
