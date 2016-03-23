#include<stdio.h>
long long int x[100000];
long long int fib(long long int n,long long int a, long long int b,long long int c,long long int d,long long int e,long long int f)
{
	long long int i=0;

	x[1]=d;x[2]=e;x[3]=f;
	for(i=4;i<=n;i++)
	{

		x[i]=(a*x[i-1] + b*x[i-2] + c*x[i-3])%10000007;
	}
	return x[n]%10000007;
}
int main()
{
	long long int n,a,b,c,d,e,f,t,y;
	scanf("%lld",&t);
	while (t--)
	{
		scanf("%lld%lld%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d,&e,&f);
		y=fib(n,a,b,c,d,e,f)%10000007;
		printf("%lld\n",y);
	}
	return 0;
}
