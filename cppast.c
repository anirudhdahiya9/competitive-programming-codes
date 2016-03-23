#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[100001],i;
		for(i=0;i<100001;i++)
			a[i]=0;
		int m,f=0,n;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d",&n);
			if(a[n]==0)
			{
				a[n]++;
				f++;
			}
		}
		printf("%d\n",f);
	}
	return 0;
}
