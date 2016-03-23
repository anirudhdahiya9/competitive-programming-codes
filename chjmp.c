#include<stdio.h>
int main()
{
	long long int p,n;
	scanf("%lld",&n);
	if(n%6==0)
	{
		printf("yes\n");
		return 0;
	}
	p=n-1;
	if(p%6==0)
	{
		printf("yes\n");
		return 0;
	}
	p=n-3;
	if(p%6==0)
	{
		printf("yes\n");
		return 0;
	}
	printf("no\n");
	return 0;
}

