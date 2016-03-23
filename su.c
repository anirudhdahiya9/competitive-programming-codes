#include<stdio.h>
int main()
{
	long long int r,i,j,o,cnt=0,k=12;
	while(cnt<=500)
	{
		cnt = 0;
		r = k*(k+1)/2;
		for(i=1;i*i<=r;i++)
		{
			if(r%i==0 && i*i!=r)
			{
				printf("%lld %lld ",i,r/i);
				cnt = cnt+2;
			}
			else if(r%i==0 && i*i==r)
			{
				printf("%lld ",i);
				cnt = cnt+1;
			}
		}
		printf("\n");
	printf("%lld\n",cnt);
		k = k+1;
	}
	return 0;
}
