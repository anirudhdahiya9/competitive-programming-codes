#include<stdio.h>
int main()
{
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	int a[k+1];
	for(i=0;i<=k;i++)
		a[i]=1;
	for(i=1;i<=k;i++)
		printf("%d ",a[i]);
	putchar('\n');
	while(a[1]!=n && a[k]!=n)
	{
		a[k]++;
		for(i=1;i<=k;i++)
			printf("%d ",a[i]);
		putchar('\n');
		if(a[k]==n)
		{
			for(i=1;i<k;i++)
			{
				if(a[k-i]!=n)
				{
					a[k-i]++;
					for(j=1;j<i;j++)
						a[k-i+j]=a[k-i];
					a[k]=a[k-1];
					break;
				}
			}
		}
	}
	
	for(i=1;i<=k;i++)
		printf("%d ",a[i]);
	putchar('\n');
	return 0;
}


