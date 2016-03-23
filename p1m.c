#include<stdio.h>
int main()
{
	long long int n,k,i,j,f,c=0,a[500000];
	void print(long long int a[],long long int k);
	long long int func(long long int n,long long int r);
	scanf("%lld %lld",&n,&k);
	if((n-1)>(k))
	printf("%lld\n",func(k+n-1,n-1));
	else if(k>(n-1))
	printf("%lld\n",func(k+n-1,k));
	 for(i=0;i<=k;i++)
                 a[i]=1;
	while(a[1]!=n)
	{

		if(a[k]<=n)
			print(a,k);
		a[k]++;
		if(a[k]>=n)
		{
			if(a[k]==n)
				print(a,k);	
			for(i=1;i<k;i++)
			{
				if(a[k-i]!=n)
				{
					a[k-i]++;
					for(j=1;j<=i;j++)
					{
						a[k-i+j]=a[k-i];
					}
					break;
				}
			}
		}
	}
	print(a,k);
	return 0;
}
void print(long long int a[],long long int k)
{
	int i;
	for(i=1;i<=k;i++)
		printf("%lld ",a[i]);
	putchar('\n');
}
long long int func(long long int n,long long int r)
{
	        if(n==r)
	        	        return 1;
		if(r==1)
				return n;
	        else
				return func(n-1,r) + func(n-1,r-1);
}

