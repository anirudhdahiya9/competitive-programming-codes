#include<stdio.h>
int main()
{
	int t;
	int n,sum,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		int x=n;
		for(i=0;i<n;i++)
		{
			scanf("%d",&j);
			if(j==0)
				x--;
			sum+=j;
		}
		if(sum>=100 && sum-x<100)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}


