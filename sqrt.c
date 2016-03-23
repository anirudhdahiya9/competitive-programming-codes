#include<stdio.h>
int main()
{
	long long int x,l,h,m,s,a;
	int t;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%lld",&x);
		l=1;
		h=1000000;
		while(l<h-1)
		{
			m=(l+h)/2;
			s=m*(m+1)*(2*m+1)/6;
			if(s>x)
				h=m-1;
			else if(s<x)
				l=m;
			else if(s==x)
			{
				a=m;
				break;
			}
		}
		if(l==h-1)
		{
			s=h*(h+1)*(2*h+1)/6;
			if(s<=x)
				a=h;
			else
				a=l;
		}
		if(l>=h)
			a=l;
		printf("%lld\n",a);
	}
	return 0;
}
