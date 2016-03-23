#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&n);
	printf("%d",f(n));
	return 0;
}
int f(int n)
{
	if(n==1)
		return 1;

	if(n==2)
		return 4;

	if(n==3)
		return 7;
	else
		return (3*f(n-1) + 4*f(n-3));
}

