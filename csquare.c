#include<stdio.h>
int main()
{
        long long int i,r,d,s;
	long long int a[100000],j;
	s=0;
	for(i=0;i<=100000;i++)
	{
		j=i*i;
		while(j!=0)
		{
			d=j%10;
			if(!(d ==  0 || d== 1 || d==4 || d==9))
				break;
			j=j/10;
		}
		if(j==0)
		{a[s]=i*i;s++;}
	}
	//for(i=0;i<s;i++)
	//	printf("%lld\n",a[i]);
	int t;
	long long int an,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&an,&b);
		for(i=0;i<s;i++)
		{
			if(a[i]>=an)
				break;
		}
		for(j=s-1;j>=0;j--)
		{
			if(a[j]<=b)
				break;
		}
		printf("%lld\n",j-i+1);

	}
	return 0;
}
