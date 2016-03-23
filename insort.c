#include<stdio.h>
int main()
{
	int a[1000];
	int n,s,i,j,k,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		s=a[i];
		for(j=0;j<i;j++)
			if(a[i]<a[j])
				break;
		c+=i-j;
		for(k=i;k>j;k--)
			a[k]=a[k-1];
		a[j]=s;
	}
	printf("%d\n",c);
	return 0;
}
