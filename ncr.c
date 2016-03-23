#include<stdio.h>
int main()
{
	int n,r,func(int n, int r);
	scanf("%d %d",&n,&r);
	printf("%d\n",func(n,r));
	return 0;
}
int func(int n, int r)
{
	if(n==r)
		return 1;
	if(r==1)
		return n;
	else
		return func(n-1,r) + func(n-1,r-1);
}
