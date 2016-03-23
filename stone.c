#include<stdio.h>
int main()
{
	long long int n,k,i,max,min;
	long long int a[100000];
	scanf("%lld %lld",&n,&k);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	if(k==0)
		for(i=0;i<n;i++)
			printf("%lld ",a[i]);
	else if(k==1)
	{
		max=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
				max=a[i];					
		}
		for(i=0;i<n;i++)
			printf("%lld ",max-a[i]);;
	}
	else
	{
		min=max=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
				max=a[i];
			if(a[i]<min)
				min=a[i];
		}
		for(i=0;i<n;i++)
			a[i]=max-a[i];
		max=max-min;
		if((k-1)%2==0)
			for(i=0;i<n;i++)
				printf("%lld ",a[i]);
		else
			for(i=0;i<n;i++)
				printf("%lld ",max-a[i]);
	}
	putchar('\n');
	return 0;
}
