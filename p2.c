#include<stdio.h>
int main()
{
	long long int T;
	scanf("%lld",&T);
	while(T--)
	{
		long long int n,s=0,i,j,max=0,f=0;
		long long int a[100000];
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(a[i]>0)
				f=1;
			s+=a[i];
			if(s<0)
				s=0;
			if(s>max)
				max=s;
		}
		if(f==0)
		{
			max=a[0];
			for(i=0;i<n;i++)
				if(a[i]>max)
					max=a[i];
			printf("%lld\n",max);
		}
		else
			printf("%lld\n",max);
	}
	return 0;
}

	





