#include<stdio.h>
void mergesort(int *a,int s,int e);
int b[1000000];
int main()
{
	int a[100000];
	int n,j,k,i,d;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	j=a[k-1]-a[0];
	for(i=k-1;i<n;i++)
	{
		d=(a[i]-a[i-k+1]);
		if(d<j)
			j=d;
	}
	printf("%d\n",j);
	return 0;
}
void mergesort(int *a,int s,int e)
{
	if(s==e)
		return;
	int m=(s+e)/2;
	mergesort(a,s,m);
	mergesort(a,m+1,e);
	int p1=s,p2=m+1,pf=s;
	while(p1<=m && p2<=e)
	{
		if(a[p1]<a[p2])
		{
			b[pf]=a[p1];
			pf++;p1++;
		}
		else if(a[p1]>=a[p2])
		{
			b[pf]=a[p2];
			pf++;p2++;
		}
	}
	if(p1<=m)
		for(;p1<=m;p1++,pf++)
			b[pf]=a[p1];
	else if(p2<=e)
		for(;p2<=e;p2++,pf++)
			b[pf]=a[p2];
	int i;
	for(i=s;i<=e;i++)
		a[i]=b[i];
}
