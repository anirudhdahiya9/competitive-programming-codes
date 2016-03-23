#include<stdio.h>
#include<stdlib.h>
int c[1000001];
int main()
{
	int n,i,j;
	int **a,*b;
	scanf("%d",&n);
	a=malloc(sizeof(int *)*n);
	b=malloc(sizeof(int)*n+2);
	for(i=0;i<n;i++)
	{
		a[i]=malloc(sizeof( int)*2);
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	for(j=0;j<=n;j=j+2)
	{
		for(i=0;i<n;i++)
		{
			if(a[i][0]==b[j])
			{
				b[j+2]=a[i][1];
				break;
			}
		}
	}
	if(b[n]!=0)
	{
		for(j=n+1;j>=1;j=j-2)
		{
			for(i=0;i<n;i++)
			{
				if(a[i][1]==b[j])
				{
					b[j-2]=a[i][0];
					break;
				}
			}
		}
	}
	else
	{
		for(i=0;i<n;i++)
			c[a[i][1]]=1;
		for(i=0;i<n;i++)
			if(c[a[i][0]]!=1)
			{
				b[1]=a[i][0];
				break;
			}
		for(j=3;j<=n;j=j+2)
		{
			for(i=0;i<n;i++)
			{
				if(a[i][0]==b[j-2])
				{
					b[j]=a[i][1];
					break;
				}
			}
		}
	}
	for(i=1;i<n+1;i++)
		printf("%d ",b[i]);
	putchar('\n');
	return 0;
}
