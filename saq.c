#include<stdio.h>
int main()
{
	int m,n,i,j,k;
	int b[100001],c[100001];
	long long int a[100001];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	for(i=1;i<=m;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=m;i++)
		scanf("%d",&c[i]);
	for(i=1;i<=m;i++)
	{
		j=b[i];
		while(j<=n)
		{
			a[j]=(a[j]*c[i])%1000000007;
			j+=b[i];
		}
	}
	for(i=1;i<=n;i++)
		printf("%lld ",a[i]);
	putchar('\n');
	return 0;
}

