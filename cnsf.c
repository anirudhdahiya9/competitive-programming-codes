#include<stdio.h>
long long int b[100000];
void mergesort(long long int *a,int s,int e);
int main()
{
	long long int a[100000];
	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
	return 0;
}

void mergesort(long long int *a,int s,int e)
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

