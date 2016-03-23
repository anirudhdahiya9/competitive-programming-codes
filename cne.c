#include<stdio.h>
int main()
{
	int n,i,a[100000],t,max,te;
	scanf("%d",&te);
	while(te--)
	{
		for(i=0;i<100000;i++)
			a[i]=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&t);
			a[t]++;
		}
		max=0;
		for(i=0;i<100000;i++)
			if(a[i]>max)
				max=a[i];
		printf("%d\n",n-max);
	}
	return 0;
}
