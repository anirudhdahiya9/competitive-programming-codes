#include<stdio.h>
int main()
{
	int t;
	int n,q,i,j,a[100000],l,r,gc;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&q);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<q;i++)
		{
			scanf("%d %d",&l,&r);
			l--;
			r--;
			gc=0;
			for(j=0;j<l;j++)
			{
				if(gc==0)
					gc=a[j];
				else
					gc=gcd(gc,a[j]);
			}
			for(j=r+1;j<n;j++)
			{
				if(gc==0)
					gc=a[j];
				else
					gc=gcd(gc,a[j]);
			}
			printf("%d\n",gc);
		}
	}
	return 0;
}
int gcd ( int a, int b )
{
	int c;
	while ( a != 0 )
	{
		c = a;
		a = b%a;
		b = c;
	}
	return b;
}


