#include<stdio.h>
int main()
{
	int n,d,a[100000],i,j,p=0,t;
	scanf("%d %d",&n,&d);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	}
	for(i=0;i<n-1;i++)
		if((a[i+1]-a[i])<=d)
		{
			p++;
			i++;
		}
	printf("%d\n",p);
	return 0;
}


