#include<stdio.h>

int main()
{
	int n,k,i,l,s;
	int a[1000000];
	float p,ans=1;
	scanf("%d %d",&n,&k);
	p=n+k-1;
	for(i=k;i>=1;i--)
	{
		ans=ans*(p/(float)i);
		p--;
	}
	ans=ans+0.5;
	printf("%d\n",(int)ans);

	for(i=0;i<k;i++)
		a[i]=1;
	while(1)
	{

		for(l=a[k-1];l<=n;l++)
		{
			a[k-1]=l;
			for(i=0;i<k;i++)
			{
				printf("%d ",a[i]);

			}
			printf("\n");
		}
		if(a[0]==n)
			break;
		s=k-1;
		while(a[s]==n)
		{
			s--;
		}
		a[s]++;
		for(i=s;i<k;i++)
		{
			a[i]=a[s];
		}
	}
	return 0;
}
