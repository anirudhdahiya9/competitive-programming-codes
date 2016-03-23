#include<stdio.h>
#include<stdlib.h>
long long int result(long long int,long long int);
int main()
{
	long long int ans,t,i,p,r,s;
	long long int j,n,m,k;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		long long int a[500][500];

		scanf("%lld %lld",&n,&m);
		for(j=0;j<m;j++)
		{
			scanf("%lld",&a[0][j]);
		}
		for(j=1;j<m;j++)
		{
			a[0][j]=result(a[0][j],a[0][j]+a[0][j-1]);
		}
		for(k=1;k<n;k++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lld",&a[k][j]);
				if(j==0)
					a[k][j]=a[k-1][j]+a[k][j];
				else
					a[k][j]=a[k][j]+result(a[k-1][j],a[k][j-1]);
			}
		}
		ans=a[n-1][0];
		for(j=0;j<m;j++)
		{
			if(a[n-1][j]>ans)
			{
				ans=a[n-1][j];
			}
		}
/*		for(k=0;k<n;k++)
		{
			for(j=0;j<m;j++)
			{
				printf("%lld ",a[k][j]);
			}
			printf("\n");
		} */
		if(ans>0)
			printf("%lld\n",ans);
		else
			printf("0\n");
	}
	return 0;
}
long long int result(long long int x,long long int y)
{
	long long int q;
	if(x>=y)
		q=x;
	else
		q=y;
	return q;
}
