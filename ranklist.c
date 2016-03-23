#include<stdio.h>
int main()
{
	long long int n,i,j,s,mid,ans,m,q;
	int f,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&s);
		i=1;
		j=100000;
		f=0;
		q=s-n;
		while(i<=j)
		{
			mid=(i+j)/2;
			m=(mid*(mid-1))/2;
			if(m==q)
			{
				ans=mid;
				break;
			}
			else if(m>q)
				j=mid-1;
			else if(m<q)
			{
				ans=mid;
				i=mid+1;
			}
		}
		printf("%lld\n",n-ans);
	}
	return 0;
}
