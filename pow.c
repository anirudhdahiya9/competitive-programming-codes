#include<stdio.h>
long long findPower(long long base,long long power,long long M);

int main()
{
	long long a,n,m;
	scanf("%lld %lld %lld",&a,&n,&m);
	printf("%lld",findPower(a,n,m));
	return 0;
}
long long findPower(long long base,long long power,long long M)
{
	    long long ans=1;
	        int i;
		    for(i=1;i<=power;i++)
			            ans=(ans*base)%M;
		        return ans;
}
