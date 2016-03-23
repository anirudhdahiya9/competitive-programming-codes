#include<stdio.h>
int main()
{
	int t;
	long long int n,i,c;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%lld",&n);
	if(n==2)
		printf("1\n");
	else
	{
	c=0;
	for(i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			if(i%2==0)
				c++;
			if((n/i)%2==0 && n/i!=i)
				c++;
		}
	}
	printf("%lld\n",c);
	}
	}
	return 0;
}
