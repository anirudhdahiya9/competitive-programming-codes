#include<stdio.h>
#include<stdlib.h>
long long int result(long long int,long long int);
int main()
{
	long long int ans,t,i,**a,p,r,s;
	long long int j,n,m,k;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		a=(long long int **)malloc(sizeof(long long int *)*2);
		for(p=0;p<2;p++)
			a[p]=(long long int *)calloc(500,sizeof(long long int));
		scanf("%lld %lld",&n,&m);
		for(j=0;j<m;j++)
		{
			scanf("%lld",&a[0][j]);
		}
		for(j=1;j<m;j++)
		{
			a[0][j]=result(a[0][j],a[0][j]+a[0][j-1]);
		}
		for(k=0;k<n-1;k++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lld",&a[1][j]);
				if(j==0)
					a[1][j]=a[1][j]+a[0][j];
				else
					a[1][j]=a[1][j]+result(a[1][j-1],a[0][j]);
			}
			for(j=0;j<m;j++)
				a[0][j]=a[1][j];
		}
		ans=a[0][0];
		for(j=1;j<m;j++)
		{
			if(a[0][j]>ans)
			{
				ans=a[0][j];
			}
		}
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
