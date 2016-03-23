#include<stdio.h>
int main()
{
	int a[10000] = {0},i,j,k,l,n,m;
	a[1]=1;
	for(i=2;i<=10000;i++)
	{
		if(a[i]==0)
		{
			for(j=2;j*i<=10000;j++)
			{
				a[i*j]=1;
			}
		}
	}
	for(i=0;i<=10000;i++)
		printf("%d ",a[i]);
	return 0;
}
