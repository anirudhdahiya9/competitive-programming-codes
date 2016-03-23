#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,i,m,x,k,r,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&r,&k);
		a=sqrt(r);
		if(a*a==r)
			k-=4;
		for(i=1;i<a;i++)
		{
			m=r-i*i;
			x=sqrt(m);
			if(x*x==m)
				k-=4;
		}
		if(k<0)
			printf("impossible\n");
		else
			printf("possible\n");
	}
	return 0;
}
