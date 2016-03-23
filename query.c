#include<stdio.h>
#include<math.h>
int main()
{
	int A[100000];
	int n,q,x,y,ans,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&A[i]);
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d %d",&x,&y);
		if(x>y)
			printf("Odd\n");
		else
		{
		if((A[x]%2)==0)
			printf("Even\n");
		else
			printf("Odd\n");
		}
	}
	return 0;
}
