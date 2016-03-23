#include<stdio.h>
int main()
{
	int a[1000],b[1000];
	int n,i,l=0,h,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	qsort(a,b,s,e
	return 0;
}
	for(i=1;i<n;i++)
		if(a[i]<a[0])
			c++;
	b[c]=a[0];
	h=c+1;
	for(i=1;i<n;i++)
	{
		if(a[i]<a[0])
			b[l++]=a[i];
		else if(a[i]>a[0])
			b[h++]=a[i];
	}
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	putchar('\n');
}

