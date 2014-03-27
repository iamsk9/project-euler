/** 3/8: check 45!*///true for any no. of digits NOTE: any means very very large nos. too
#include<iostream>/**mult not functioning properly : edit 30/7 : now its working :) */
#include<string>
#include<algorithm>// used just to reverse the strings so that '0' padding is not required
#include<ctime>
#include<iomanip>
#include<fstream>
using namespace std;
unsigned int starttime;//used for different processes
class longnumber{
    
    public:
           string num;
    longnumber(string s="0")
    {
        num=s;
    }
    int length()
    {
        return num.length();
    }
    friend ostream& operator<<(ostream&,longnumber);
    friend istream& operator>>(istream&,longnumber&);
    longnumber operator+(longnumber);
    longnumber operator-(longnumber);
    friend longnumber purify(longnumber);//used this to make a number e.g (1234 from 001234) as it is only string not number
    bool operator>(longnumber);
    bool operator<(longnumber);
    longnumber operator*(longnumber);
    longnumber operator^(longnumber);
    longnumber operator/(longnumber);
    longnumber factorial()
    {
        longnumber multiplier("1");
        longnumber result("1");
        while(multiplier<*this)
        {
            result=purify(result)*purify(multiplier);
            multiplier.incrementby1();
        }
        result=purify(result);
        return purify(result);
    }
    //longnumber operator--(longnumber);
    bool iszero()
    {
		for(int i=0;i<num.length();i++)
		  if(num[i]!='0')
		    return false;
        return true;
	}
	void decrementby1()
	{
	    reverse(num.begin(),num.end());
	    int i=0;
	    while(num[i]=='0')
	    {
			num[i]='9';
			i++;
		}
		num[i]--;
		reverse(num.begin(),num.end());
    }
    void incrementby1()
    {
        reverse(num.begin(),num.end());
        int i=0;
        while(num[i]=='9')
        {
            num[i]='0';
            i++;
        }
        if(i==num.length())
          num=num+"0";
        num[i]++;
        reverse(num.begin(),num.end());
    }
    };
longnumber longnumber::operator+(longnumber ntoadd)
{
    longnumber toreturn;
    string s1=num;
    string s2=ntoadd.num;
    int d1=s1.length();
    int d2=s2.length();
    int dm=max(d1,d2);
    int dl=min(d1,d2);
    char sm[dm+1];
    //string sm;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int c=0;
    int i=0;
    for(;i<dl;i++)
    {
        sm[i]=((s1[i]+s2[i]+c-2*'0')%10)+'0';
        c=(s1[i]+s2[i]+c-2*'0')/10;
    }

    if(dm==d1)
    {
        for(;i<dm;i++)
        {
        sm[i]=((s1[i]+c-'0')%10)+'0';
        c=(s1[i]+c-'0')/10;
        }
    }
    else
    {
        for(;i<dm;i++)
        {
        sm[i]=((s2[i]+c-'0')%10)+'0';
        c=(s2[i]+c-'0')/10;
        }
    }
    sm[i]=c+'0';
    if(c==0)
    {
        char tm[dm+1];
        //string tm;
        copy(sm,sm+dm,tm);
        reverse(tm,tm+dm);
        tm[dm]='\0';
        toreturn.num=tm;
        return purify(toreturn);
    }
    reverse(sm,sm+dm+1);
    toreturn.num=sm;
    return purify(toreturn);
}
longnumber longnumber::operator-(longnumber ntosub)
{
    longnumber toreturn;
    string s1=num;
    string s2=ntosub.num;
    int m=s1.length();
    int n=s2.length();
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    char diffc[m+1];
    int i;
    for(i=0;i<n;i++)
    {
        if(s1[i]>=s2[i])
        diffc[i]=s1[i]-s2[i]+48;
        else
        {
            int p=i+1;
            while(s1[p]=='0')
            s1[p++]='9';
            s1[p]--;
            diffc[i]=s1[i]+10-s2[i]+48;
        }
    }
    for(;i<m;i++)
    {
        diffc[i]=s1[i];
    }
    diffc[i]='\0';
    reverse(diffc,diffc+m);
    toreturn.num=diffc;
    toreturn=purify(toreturn);
    return toreturn;
}
longnumber purify(longnumber n)
{
    longnumber toreturn;
    string s=n.num;
    int l=s.length();
    char dmy[l];
    copy(s.begin(),s.end(),dmy);
    int i=0;char temp[l];int cnt=0;
    while(dmy[i]=='0')
    i++;
    for(;i<l;i++)
    {
        if(dmy[i]>'9'||dmy[i]<'0')
        break;
        temp[cnt++]=dmy[i];
    }
    temp[cnt]='\0';
    toreturn.num=temp;
    if(toreturn.num.length()==0)
      toreturn.num="0";
    return toreturn;
    return n;
}
ostream& operator<<(ostream& out,longnumber n)
{
    out<<n.num;
    return out;
}
istream& operator>>(istream& in,longnumber& n)
{
    in>>n.num;
    return in;
}
bool longnumber::operator>(longnumber y)
{
    int xl=this->length(),yl=y.length();// i stored it so that no need to calculate more than once
    if(xl>yl)
      return true;
    else if(yl>xl)
      return false;
    else
    {
        int xptr=0;//since same no. of digit so same yptr {NOTE: commited a mistake xptr=num[0]}
        while(num[xptr]==y.num[xptr])
          xptr++;
        if(num[xptr]>y.num[xptr]&&xptr<xl)
          return true;
        else
          return false;// note for equal nos. too it will be false
    }
}
bool longnumber::operator<(longnumber y)// prefer not to use this as for this some(may be) prob with equal
{
    return !(*this>y);
}
longnumber longnumber::operator*(longnumber y)//assuming y<x
{
	longnumber result;
   while(!y.iszero())
   {
	   //cout<<boolalpha<<y.iszero();
	 //cout<<result<<"+"<<*this<<" == ";
	 result=purify(result)+purify(*this);
	 //cout<<result<<endl;
     y.decrementby1();
     //cout<<y<<endl;
     //cout<<boolalpha<<y.iszero();
   }
   return result;
}
longnumber longnumber::operator^(longnumber y)
{
    longnumber result("1");
    while(!y.iszero())
    {
        result=purify(result)*purify(*this);
        y.decrementby1();
    }
    return purify(result);
}
longnumber longnumber::operator/(longnumber y)
{
    longnumber quo;
    while(*this>y)
    {
        *this=*this-y;
        quo.incrementby1();
    }
    if((*this-y).iszero())
      {
          quo.incrementby1();
          *this=*this-*this;//have to do by this because = is not defined for longnumber
      }
    cout<<"remainder == "<<*this<<endl;
    return purify(quo);
}
int main()
{
    
	longnumber x,y;
    ifstream file("input.txt");
    //string a;
    file>>x;
    for(int i=0;i<99;++i)
    {
            file>>y;
            x=x+y;
 //cout<<a<<endl;
    }   
    //cout<<a<<endl;
    
    cout<<x.num.substr(0,10)<<endl;
    system("pause");
    return 0;
    //cout<<x*y<<endl<<x-y<<endl;
}
