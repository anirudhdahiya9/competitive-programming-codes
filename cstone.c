#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n,k,i,j;
	long long int a[100000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		a[i]=k/j;
	}
 	long long int max=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		a[i]*=j;
		if(a[i]>max)
			max=a[i];
	}
	printf("%lld\n",max);
	}
	return 0;
}

