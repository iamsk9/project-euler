#include<stdio.h>
#include<conio.h>
#define Fi(s,l) for(i=s;i<l;++i)
//#define Fj(s,l) for(j=slj<l;++j)

int main()
{
	int sum=0;
	int i;
	Fi(1,1000)
	{
		if(i%3==0 || i%5==0)
		sum+=i;
	}
	printf("%d",sum);
	system("pause");
}
