#include<stdio.h>
#include<math.h>
int main()
{
	long long int k,i,j,p;
	long long int ans,m,r;
	scanf("%lld %lld",&r,&k);
	m=p=0;
	ans=sqrt(r);
	printf("%lld\n",ans);
	
	for(i=0;i<=ans;i++)
		for(j=0;j<=ans;j++)
		{
			m=i*i + j*j;
			if(m==r)
			{
				
				if(i==j)
				{
					m=m+4;
				}
				else
					m=m+8;
			}
		}
	printf("%lld\n",m);
	return 0;
}
