#include<stdio.h>
typedef long long int lli;
lli a[100001][2];
lli b[100001][2];
void mergesort(int s,int e)
{
    if(s==e)
	return;
    mergesort(s,(s+e)/2);
    mergesort((s+e)/2 + 1,e);
    int i,j,k;
    j=s;
    k=(s+e)/2 + 1;
    i=s;
    while(j<=(s+e)/2 && k<=e)
    {
	if(a[j][1]<a[k][1])
	{
	    b[i][0]=a[j][0];
	    b[i][1]=a[j][1];
	    j++;
	    i++;
	}
	else
	{
	    b[i][0]=a[k][0];
	    b[i][1]=a[k][1];
	    k++;
	    i++;
	}
    }
    if(j>(s+e)/2)
    {
	while(k<=e)
	{
	    b[i][0]=a[k][0];
	    b[i][1]=a[k][1];
	    i++;
	    k++;
	}
    }
    if(k>e)
    {
	while(j<=(s+e)/2)
	{
	    b[i][0]=a[j][0];
	    b[i][1]=a[j][1];
	    i++;
	    j++;
	}
    }
    for(i=s;i<=e;i++)
    {
	a[i][0]=b[i][0];
	a[i][1]=b[i][1];
    }
}
int main()
{
    lli t,i,j,k,l,d,n,md,x,y;
    lli ar[100001];
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
	scanf("%lld",&k);
	md=0;
	for(j=0;j<k;j++)
	{
	scanf("%lld%lld",&x,&y);
	d=x*x + y*y;
	if(d>md)
	    md=d;
	}
	a[i][0]=i;
	a[i][1]=md;
    }
   // for(i=0;i<n;i++)
//	printf("%d %d\n",a[i][0],a[i][1]);
    mergesort(0,n-1);
  //  for(i=0;i<n;i++)
//	printf("%d %d\n",a[i][0],a[i][1]);
	for(i=0;i<n;i++)
	{
	    ar[a[i][0]]=i;
	}
	for(i=0;i<n;i++)
	{
	    printf("%lld ",ar[i]);
	}
	putchar('\n');
    }
    return 0;
}
