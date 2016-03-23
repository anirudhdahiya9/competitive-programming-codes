#include<stdio.h>
int main()
{
	long long int m,n,i,j,t;
	scanf("%lld",&t);
	while(t--)
	{
	long long int a[501][501],b[501][501],max;
	scanf("%lld %lld",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%lld",&a[i][j]);
	b[0][0]=a[0][0];
	for(i=1;i<n;i++)
	{
		if(b[0][i-1]<0)
			b[0][i]=a[0][i];
		else
			b[0][i]=b[0][i-1] + a[0][i];
	}
	for(i=1;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(j==0)
				b[i][j]=a[i][j] + b[i-1][j];
			else
			{
				if(b[i-1][j]>b[i][j-1])
					b[i][j]=a[i][j] + b[i-1][j];
				else
					b[i][j]=a[i][j] + b[i][j-1];
			}
		}
	max=b[m-1][0];
	for(i=1;i<n;i++)
	{
		if(b[m-1][i]>max)
			max=b[m-1][i];
	}
	/*for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%lld ",b[i][j]);
	putchar('\n');
	}*/
	max = max<0?0:max;
	printf("%lld\n",max);
	}
	return 0;
}
	

	


