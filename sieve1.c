#include<stdio.h>
int main()
{
	int a[10000],b[10000]={1};
	int i;
	b[0]=0;
	for(i=0;i<10000;i++)
	{
		if(b[i]==1)
			for(j=2;(i+1)*j<10000;j++)
				b[(i+1)*j-1]=0;
	}
