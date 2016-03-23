#include<stdio.h>
int main()
{
	unsigned long long n,i,j,k,count;
	scanf("%llu",&n);
	for(i=1;i<100000000;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==n)
			break;
		if(count>n)
		{
			printf("%llu %llu\n",i,count);
			break;
		}
	}
	if(count==n)
	printf("%llu\n",i);
	return 0;
}




